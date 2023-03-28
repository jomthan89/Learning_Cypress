/*******************************************************************************
* File Name: UART1_RX_ISR.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_UART1_RX_ISR_H)
#define CY_ISR_UART1_RX_ISR_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void UART1_RX_ISR_Start(void);
void UART1_RX_ISR_StartEx(cyisraddress address);
void UART1_RX_ISR_Stop(void);

CY_ISR_PROTO(UART1_RX_ISR_Interrupt);

void UART1_RX_ISR_SetVector(cyisraddress address);
cyisraddress UART1_RX_ISR_GetVector(void);

void UART1_RX_ISR_SetPriority(uint8 priority);
uint8 UART1_RX_ISR_GetPriority(void);

void UART1_RX_ISR_Enable(void);
uint8 UART1_RX_ISR_GetState(void);
void UART1_RX_ISR_Disable(void);

void UART1_RX_ISR_SetPending(void);
void UART1_RX_ISR_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the UART1_RX_ISR ISR. */
#define UART1_RX_ISR_INTC_VECTOR            ((reg32 *) UART1_RX_ISR__INTC_VECT)

/* Address of the UART1_RX_ISR ISR priority. */
#define UART1_RX_ISR_INTC_PRIOR             ((reg8 *) UART1_RX_ISR__INTC_PRIOR_REG)

/* Priority of the UART1_RX_ISR interrupt. */
#define UART1_RX_ISR_INTC_PRIOR_NUMBER      UART1_RX_ISR__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable UART1_RX_ISR interrupt. */
#define UART1_RX_ISR_INTC_SET_EN            ((reg32 *) UART1_RX_ISR__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the UART1_RX_ISR interrupt. */
#define UART1_RX_ISR_INTC_CLR_EN            ((reg32 *) UART1_RX_ISR__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the UART1_RX_ISR interrupt state to pending. */
#define UART1_RX_ISR_INTC_SET_PD            ((reg32 *) UART1_RX_ISR__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the UART1_RX_ISR interrupt. */
#define UART1_RX_ISR_INTC_CLR_PD            ((reg32 *) UART1_RX_ISR__INTC_CLR_PD_REG)


#endif /* CY_ISR_UART1_RX_ISR_H */


/* [] END OF FILE */
