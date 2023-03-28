/*******************************************************************************
* File Name: UART_Serial_PM.c
* Version 2.50
*
* Description:
*  This file provides Sleep/WakeUp APIs functionality.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "UART_Serial.h"


/***************************************
* Local data allocation
***************************************/

static UART_Serial_BACKUP_STRUCT  UART_Serial_backup =
{
    /* enableState - disabled */
    0u,
};



/*******************************************************************************
* Function Name: UART_Serial_SaveConfig
********************************************************************************
*
* Summary:
*  This function saves the component nonretention control register.
*  Does not save the FIFO which is a set of nonretention registers.
*  This function is called by the UART_Serial_Sleep() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  UART_Serial_backup - modified when non-retention registers are saved.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void UART_Serial_SaveConfig(void)
{
    #if(UART_Serial_CONTROL_REG_REMOVED == 0u)
        UART_Serial_backup.cr = UART_Serial_CONTROL_REG;
    #endif /* End UART_Serial_CONTROL_REG_REMOVED */
}


/*******************************************************************************
* Function Name: UART_Serial_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the nonretention control register except FIFO.
*  Does not restore the FIFO which is a set of nonretention registers.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  UART_Serial_backup - used when non-retention registers are restored.
*
* Reentrant:
*  No.
*
* Notes:
*  If this function is called without calling UART_Serial_SaveConfig() 
*  first, the data loaded may be incorrect.
*
*******************************************************************************/
void UART_Serial_RestoreConfig(void)
{
    #if(UART_Serial_CONTROL_REG_REMOVED == 0u)
        UART_Serial_CONTROL_REG = UART_Serial_backup.cr;
    #endif /* End UART_Serial_CONTROL_REG_REMOVED */
}


/*******************************************************************************
* Function Name: UART_Serial_Sleep
********************************************************************************
*
* Summary:
*  This is the preferred API to prepare the component for sleep. 
*  The UART_Serial_Sleep() API saves the current component state. Then it
*  calls the UART_Serial_Stop() function and calls 
*  UART_Serial_SaveConfig() to save the hardware configuration.
*  Call the UART_Serial_Sleep() function before calling the CyPmSleep() 
*  or the CyPmHibernate() function. 
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  UART_Serial_backup - modified when non-retention registers are saved.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void UART_Serial_Sleep(void)
{
    #if(UART_Serial_RX_ENABLED || UART_Serial_HD_ENABLED)
        if((UART_Serial_RXSTATUS_ACTL_REG  & UART_Serial_INT_ENABLE) != 0u)
        {
            UART_Serial_backup.enableState = 1u;
        }
        else
        {
            UART_Serial_backup.enableState = 0u;
        }
    #else
        if((UART_Serial_TXSTATUS_ACTL_REG  & UART_Serial_INT_ENABLE) !=0u)
        {
            UART_Serial_backup.enableState = 1u;
        }
        else
        {
            UART_Serial_backup.enableState = 0u;
        }
    #endif /* End UART_Serial_RX_ENABLED || UART_Serial_HD_ENABLED*/

    UART_Serial_Stop();
    UART_Serial_SaveConfig();
}


/*******************************************************************************
* Function Name: UART_Serial_Wakeup
********************************************************************************
*
* Summary:
*  This is the preferred API to restore the component to the state when 
*  UART_Serial_Sleep() was called. The UART_Serial_Wakeup() function
*  calls the UART_Serial_RestoreConfig() function to restore the 
*  configuration. If the component was enabled before the 
*  UART_Serial_Sleep() function was called, the UART_Serial_Wakeup()
*  function will also re-enable the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  UART_Serial_backup - used when non-retention registers are restored.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void UART_Serial_Wakeup(void)
{
    UART_Serial_RestoreConfig();
    #if( (UART_Serial_RX_ENABLED) || (UART_Serial_HD_ENABLED) )
        UART_Serial_ClearRxBuffer();
    #endif /* End (UART_Serial_RX_ENABLED) || (UART_Serial_HD_ENABLED) */
    #if(UART_Serial_TX_ENABLED || UART_Serial_HD_ENABLED)
        UART_Serial_ClearTxBuffer();
    #endif /* End UART_Serial_TX_ENABLED || UART_Serial_HD_ENABLED */

    if(UART_Serial_backup.enableState != 0u)
    {
        UART_Serial_Enable();
    }
}


/* [] END OF FILE */
