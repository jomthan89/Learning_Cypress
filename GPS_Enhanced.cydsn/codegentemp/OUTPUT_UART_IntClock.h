/*******************************************************************************
* File Name: OUTPUT_UART_IntClock.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_OUTPUT_UART_IntClock_H)
#define CY_CLOCK_OUTPUT_UART_IntClock_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void OUTPUT_UART_IntClock_Start(void) ;
void OUTPUT_UART_IntClock_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void OUTPUT_UART_IntClock_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void OUTPUT_UART_IntClock_StandbyPower(uint8 state) ;
void OUTPUT_UART_IntClock_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 OUTPUT_UART_IntClock_GetDividerRegister(void) ;
void OUTPUT_UART_IntClock_SetModeRegister(uint8 modeBitMask) ;
void OUTPUT_UART_IntClock_ClearModeRegister(uint8 modeBitMask) ;
uint8 OUTPUT_UART_IntClock_GetModeRegister(void) ;
void OUTPUT_UART_IntClock_SetSourceRegister(uint8 clkSource) ;
uint8 OUTPUT_UART_IntClock_GetSourceRegister(void) ;
#if defined(OUTPUT_UART_IntClock__CFG3)
void OUTPUT_UART_IntClock_SetPhaseRegister(uint8 clkPhase) ;
uint8 OUTPUT_UART_IntClock_GetPhaseRegister(void) ;
#endif /* defined(OUTPUT_UART_IntClock__CFG3) */

#define OUTPUT_UART_IntClock_Enable()                       OUTPUT_UART_IntClock_Start()
#define OUTPUT_UART_IntClock_Disable()                      OUTPUT_UART_IntClock_Stop()
#define OUTPUT_UART_IntClock_SetDivider(clkDivider)         OUTPUT_UART_IntClock_SetDividerRegister(clkDivider, 1u)
#define OUTPUT_UART_IntClock_SetDividerValue(clkDivider)    OUTPUT_UART_IntClock_SetDividerRegister((clkDivider) - 1u, 1u)
#define OUTPUT_UART_IntClock_SetMode(clkMode)               OUTPUT_UART_IntClock_SetModeRegister(clkMode)
#define OUTPUT_UART_IntClock_SetSource(clkSource)           OUTPUT_UART_IntClock_SetSourceRegister(clkSource)
#if defined(OUTPUT_UART_IntClock__CFG3)
#define OUTPUT_UART_IntClock_SetPhase(clkPhase)             OUTPUT_UART_IntClock_SetPhaseRegister(clkPhase)
#define OUTPUT_UART_IntClock_SetPhaseValue(clkPhase)        OUTPUT_UART_IntClock_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(OUTPUT_UART_IntClock__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define OUTPUT_UART_IntClock_CLKEN              (* (reg8 *) OUTPUT_UART_IntClock__PM_ACT_CFG)
#define OUTPUT_UART_IntClock_CLKEN_PTR          ((reg8 *) OUTPUT_UART_IntClock__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define OUTPUT_UART_IntClock_CLKSTBY            (* (reg8 *) OUTPUT_UART_IntClock__PM_STBY_CFG)
#define OUTPUT_UART_IntClock_CLKSTBY_PTR        ((reg8 *) OUTPUT_UART_IntClock__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define OUTPUT_UART_IntClock_DIV_LSB            (* (reg8 *) OUTPUT_UART_IntClock__CFG0)
#define OUTPUT_UART_IntClock_DIV_LSB_PTR        ((reg8 *) OUTPUT_UART_IntClock__CFG0)
#define OUTPUT_UART_IntClock_DIV_PTR            ((reg16 *) OUTPUT_UART_IntClock__CFG0)

/* Clock MSB divider configuration register. */
#define OUTPUT_UART_IntClock_DIV_MSB            (* (reg8 *) OUTPUT_UART_IntClock__CFG1)
#define OUTPUT_UART_IntClock_DIV_MSB_PTR        ((reg8 *) OUTPUT_UART_IntClock__CFG1)

/* Mode and source configuration register */
#define OUTPUT_UART_IntClock_MOD_SRC            (* (reg8 *) OUTPUT_UART_IntClock__CFG2)
#define OUTPUT_UART_IntClock_MOD_SRC_PTR        ((reg8 *) OUTPUT_UART_IntClock__CFG2)

#if defined(OUTPUT_UART_IntClock__CFG3)
/* Analog clock phase configuration register */
#define OUTPUT_UART_IntClock_PHASE              (* (reg8 *) OUTPUT_UART_IntClock__CFG3)
#define OUTPUT_UART_IntClock_PHASE_PTR          ((reg8 *) OUTPUT_UART_IntClock__CFG3)
#endif /* defined(OUTPUT_UART_IntClock__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define OUTPUT_UART_IntClock_CLKEN_MASK         OUTPUT_UART_IntClock__PM_ACT_MSK
#define OUTPUT_UART_IntClock_CLKSTBY_MASK       OUTPUT_UART_IntClock__PM_STBY_MSK

/* CFG2 field masks */
#define OUTPUT_UART_IntClock_SRC_SEL_MSK        OUTPUT_UART_IntClock__CFG2_SRC_SEL_MASK
#define OUTPUT_UART_IntClock_MODE_MASK          (~(OUTPUT_UART_IntClock_SRC_SEL_MSK))

#if defined(OUTPUT_UART_IntClock__CFG3)
/* CFG3 phase mask */
#define OUTPUT_UART_IntClock_PHASE_MASK         OUTPUT_UART_IntClock__CFG3_PHASE_DLY_MASK
#endif /* defined(OUTPUT_UART_IntClock__CFG3) */

#endif /* CY_CLOCK_OUTPUT_UART_IntClock_H */


/* [] END OF FILE */
