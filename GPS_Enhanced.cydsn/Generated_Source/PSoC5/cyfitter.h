/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* Rx_1 */
#define Rx_1__0__INTTYPE CYREG_PICU3_INTTYPE5
#define Rx_1__0__MASK 0x20u
#define Rx_1__0__PC CYREG_PRT3_PC5
#define Rx_1__0__PORT 3u
#define Rx_1__0__SHIFT 5u
#define Rx_1__AG CYREG_PRT3_AG
#define Rx_1__AMUX CYREG_PRT3_AMUX
#define Rx_1__BIE CYREG_PRT3_BIE
#define Rx_1__BIT_MASK CYREG_PRT3_BIT_MASK
#define Rx_1__BYP CYREG_PRT3_BYP
#define Rx_1__CTL CYREG_PRT3_CTL
#define Rx_1__DM0 CYREG_PRT3_DM0
#define Rx_1__DM1 CYREG_PRT3_DM1
#define Rx_1__DM2 CYREG_PRT3_DM2
#define Rx_1__DR CYREG_PRT3_DR
#define Rx_1__INP_DIS CYREG_PRT3_INP_DIS
#define Rx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Rx_1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Rx_1__LCD_EN CYREG_PRT3_LCD_EN
#define Rx_1__MASK 0x20u
#define Rx_1__PORT 3u
#define Rx_1__PRT CYREG_PRT3_PRT
#define Rx_1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Rx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Rx_1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Rx_1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Rx_1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Rx_1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Rx_1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Rx_1__PS CYREG_PRT3_PS
#define Rx_1__SHIFT 5u
#define Rx_1__SLW CYREG_PRT3_SLW

/* Rx_2 */
#define Rx_2__0__INTTYPE CYREG_PICU3_INTTYPE0
#define Rx_2__0__MASK 0x01u
#define Rx_2__0__PC CYREG_PRT3_PC0
#define Rx_2__0__PORT 3u
#define Rx_2__0__SHIFT 0u
#define Rx_2__AG CYREG_PRT3_AG
#define Rx_2__AMUX CYREG_PRT3_AMUX
#define Rx_2__BIE CYREG_PRT3_BIE
#define Rx_2__BIT_MASK CYREG_PRT3_BIT_MASK
#define Rx_2__BYP CYREG_PRT3_BYP
#define Rx_2__CTL CYREG_PRT3_CTL
#define Rx_2__DM0 CYREG_PRT3_DM0
#define Rx_2__DM1 CYREG_PRT3_DM1
#define Rx_2__DM2 CYREG_PRT3_DM2
#define Rx_2__DR CYREG_PRT3_DR
#define Rx_2__INP_DIS CYREG_PRT3_INP_DIS
#define Rx_2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Rx_2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Rx_2__LCD_EN CYREG_PRT3_LCD_EN
#define Rx_2__MASK 0x01u
#define Rx_2__PORT 3u
#define Rx_2__PRT CYREG_PRT3_PRT
#define Rx_2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Rx_2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Rx_2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Rx_2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Rx_2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Rx_2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Rx_2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Rx_2__PS CYREG_PRT3_PS
#define Rx_2__SHIFT 0u
#define Rx_2__SLW CYREG_PRT3_SLW

/* Tx_1 */
#define Tx_1__0__INTTYPE CYREG_PICU3_INTTYPE4
#define Tx_1__0__MASK 0x10u
#define Tx_1__0__PC CYREG_PRT3_PC4
#define Tx_1__0__PORT 3u
#define Tx_1__0__SHIFT 4u
#define Tx_1__AG CYREG_PRT3_AG
#define Tx_1__AMUX CYREG_PRT3_AMUX
#define Tx_1__BIE CYREG_PRT3_BIE
#define Tx_1__BIT_MASK CYREG_PRT3_BIT_MASK
#define Tx_1__BYP CYREG_PRT3_BYP
#define Tx_1__CTL CYREG_PRT3_CTL
#define Tx_1__DM0 CYREG_PRT3_DM0
#define Tx_1__DM1 CYREG_PRT3_DM1
#define Tx_1__DM2 CYREG_PRT3_DM2
#define Tx_1__DR CYREG_PRT3_DR
#define Tx_1__INP_DIS CYREG_PRT3_INP_DIS
#define Tx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Tx_1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Tx_1__LCD_EN CYREG_PRT3_LCD_EN
#define Tx_1__MASK 0x10u
#define Tx_1__PORT 3u
#define Tx_1__PRT CYREG_PRT3_PRT
#define Tx_1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Tx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Tx_1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Tx_1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Tx_1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Tx_1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Tx_1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Tx_1__PS CYREG_PRT3_PS
#define Tx_1__SHIFT 4u
#define Tx_1__SLW CYREG_PRT3_SLW

/* Tx_2 */
#define Tx_2__0__INTTYPE CYREG_PICU3_INTTYPE1
#define Tx_2__0__MASK 0x02u
#define Tx_2__0__PC CYREG_PRT3_PC1
#define Tx_2__0__PORT 3u
#define Tx_2__0__SHIFT 1u
#define Tx_2__AG CYREG_PRT3_AG
#define Tx_2__AMUX CYREG_PRT3_AMUX
#define Tx_2__BIE CYREG_PRT3_BIE
#define Tx_2__BIT_MASK CYREG_PRT3_BIT_MASK
#define Tx_2__BYP CYREG_PRT3_BYP
#define Tx_2__CTL CYREG_PRT3_CTL
#define Tx_2__DM0 CYREG_PRT3_DM0
#define Tx_2__DM1 CYREG_PRT3_DM1
#define Tx_2__DM2 CYREG_PRT3_DM2
#define Tx_2__DR CYREG_PRT3_DR
#define Tx_2__INP_DIS CYREG_PRT3_INP_DIS
#define Tx_2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Tx_2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Tx_2__LCD_EN CYREG_PRT3_LCD_EN
#define Tx_2__MASK 0x02u
#define Tx_2__PORT 3u
#define Tx_2__PRT CYREG_PRT3_PRT
#define Tx_2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Tx_2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Tx_2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Tx_2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Tx_2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Tx_2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Tx_2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Tx_2__PS CYREG_PRT3_PS
#define Tx_2__SHIFT 1u
#define Tx_2__SLW CYREG_PRT3_SLW

/* PW_GPS */
#define PW_GPS__0__INTTYPE CYREG_PICU3_INTTYPE7
#define PW_GPS__0__MASK 0x80u
#define PW_GPS__0__PC CYREG_PRT3_PC7
#define PW_GPS__0__PORT 3u
#define PW_GPS__0__SHIFT 7u
#define PW_GPS__AG CYREG_PRT3_AG
#define PW_GPS__AMUX CYREG_PRT3_AMUX
#define PW_GPS__BIE CYREG_PRT3_BIE
#define PW_GPS__BIT_MASK CYREG_PRT3_BIT_MASK
#define PW_GPS__BYP CYREG_PRT3_BYP
#define PW_GPS__CTL CYREG_PRT3_CTL
#define PW_GPS__DM0 CYREG_PRT3_DM0
#define PW_GPS__DM1 CYREG_PRT3_DM1
#define PW_GPS__DM2 CYREG_PRT3_DM2
#define PW_GPS__DR CYREG_PRT3_DR
#define PW_GPS__INP_DIS CYREG_PRT3_INP_DIS
#define PW_GPS__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define PW_GPS__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define PW_GPS__LCD_EN CYREG_PRT3_LCD_EN
#define PW_GPS__MASK 0x80u
#define PW_GPS__PORT 3u
#define PW_GPS__PRT CYREG_PRT3_PRT
#define PW_GPS__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define PW_GPS__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define PW_GPS__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define PW_GPS__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define PW_GPS__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define PW_GPS__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define PW_GPS__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define PW_GPS__PS CYREG_PRT3_PS
#define PW_GPS__SHIFT 7u
#define PW_GPS__SLW CYREG_PRT3_SLW

/* GPS_UART */
#define GPS_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define GPS_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define GPS_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB02_03_CTL
#define GPS_UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define GPS_UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB02_03_CTL
#define GPS_UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB02_03_MSK
#define GPS_UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define GPS_UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB02_03_MSK
#define GPS_UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define GPS_UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define GPS_UART_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B0_UDB02_CTL
#define GPS_UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B0_UDB02_ST_CTL
#define GPS_UART_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B0_UDB02_CTL
#define GPS_UART_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B0_UDB02_ST_CTL
#define GPS_UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define GPS_UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define GPS_UART_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B0_UDB02_MSK
#define GPS_UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define GPS_UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB02_03_ST
#define GPS_UART_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B0_UDB02_MSK
#define GPS_UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define GPS_UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define GPS_UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define GPS_UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB02_ST_CTL
#define GPS_UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB02_ST_CTL
#define GPS_UART_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B0_UDB02_ST
#define GPS_UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B0_UDB02_03_A0
#define GPS_UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B0_UDB02_03_A1
#define GPS_UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B0_UDB02_03_D0
#define GPS_UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B0_UDB02_03_D1
#define GPS_UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define GPS_UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B0_UDB02_03_F0
#define GPS_UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B0_UDB02_03_F1
#define GPS_UART_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B0_UDB02_A0_A1
#define GPS_UART_BUART_sRX_RxShifter_u0__A0_REG CYREG_B0_UDB02_A0
#define GPS_UART_BUART_sRX_RxShifter_u0__A1_REG CYREG_B0_UDB02_A1
#define GPS_UART_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B0_UDB02_D0_D1
#define GPS_UART_BUART_sRX_RxShifter_u0__D0_REG CYREG_B0_UDB02_D0
#define GPS_UART_BUART_sRX_RxShifter_u0__D1_REG CYREG_B0_UDB02_D1
#define GPS_UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define GPS_UART_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B0_UDB02_F0_F1
#define GPS_UART_BUART_sRX_RxShifter_u0__F0_REG CYREG_B0_UDB02_F0
#define GPS_UART_BUART_sRX_RxShifter_u0__F1_REG CYREG_B0_UDB02_F1
#define GPS_UART_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define GPS_UART_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define GPS_UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB03_04_ACTL
#define GPS_UART_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B0_UDB03_04_ST
#define GPS_UART_BUART_sRX_RxSts__3__MASK 0x08u
#define GPS_UART_BUART_sRX_RxSts__3__POS 3
#define GPS_UART_BUART_sRX_RxSts__4__MASK 0x10u
#define GPS_UART_BUART_sRX_RxSts__4__POS 4
#define GPS_UART_BUART_sRX_RxSts__5__MASK 0x20u
#define GPS_UART_BUART_sRX_RxSts__5__POS 5
#define GPS_UART_BUART_sRX_RxSts__MASK 0x38u
#define GPS_UART_BUART_sRX_RxSts__MASK_REG CYREG_B0_UDB03_MSK
#define GPS_UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB03_ACTL
#define GPS_UART_BUART_sRX_RxSts__STATUS_REG CYREG_B0_UDB03_ST
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB07_08_A0
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB07_08_A1
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB07_08_D0
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB07_08_D1
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB07_08_F0
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB07_08_F1
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB07_A0_A1
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB07_A0
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB07_A1
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB07_D0_D1
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB07_D0
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB07_D1
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB07_F0_F1
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB07_F0
#define GPS_UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB07_F1
#define GPS_UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB04_05_A0
#define GPS_UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB04_05_A1
#define GPS_UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB04_05_D0
#define GPS_UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB04_05_D1
#define GPS_UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define GPS_UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB04_05_F0
#define GPS_UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB04_05_F1
#define GPS_UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB04_A0_A1
#define GPS_UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB04_A0
#define GPS_UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB04_A1
#define GPS_UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB04_D0_D1
#define GPS_UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB04_D0
#define GPS_UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB04_D1
#define GPS_UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define GPS_UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB04_F0_F1
#define GPS_UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB04_F0
#define GPS_UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB04_F1
#define GPS_UART_BUART_sTX_TxSts__0__MASK 0x01u
#define GPS_UART_BUART_sTX_TxSts__0__POS 0
#define GPS_UART_BUART_sTX_TxSts__1__MASK 0x02u
#define GPS_UART_BUART_sTX_TxSts__1__POS 1
#define GPS_UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define GPS_UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB07_08_ST
#define GPS_UART_BUART_sTX_TxSts__2__MASK 0x04u
#define GPS_UART_BUART_sTX_TxSts__2__POS 2
#define GPS_UART_BUART_sTX_TxSts__3__MASK 0x08u
#define GPS_UART_BUART_sTX_TxSts__3__POS 3
#define GPS_UART_BUART_sTX_TxSts__MASK 0x0Fu
#define GPS_UART_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB07_MSK
#define GPS_UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define GPS_UART_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB07_ST
#define GPS_UART_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define GPS_UART_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define GPS_UART_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define GPS_UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define GPS_UART_IntClock__INDEX 0x00u
#define GPS_UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define GPS_UART_IntClock__PM_ACT_MSK 0x01u
#define GPS_UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define GPS_UART_IntClock__PM_STBY_MSK 0x01u

/* OUTPUT_UART */
#define OUTPUT_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB04_05_CTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB04_05_CTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB04_05_CTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B1_UDB04_05_CTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B1_UDB04_05_MSK
#define OUTPUT_UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B1_UDB04_05_MSK
#define OUTPUT_UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B1_UDB04_05_MSK
#define OUTPUT_UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB04_05_MSK
#define OUTPUT_UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B1_UDB04_CTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B1_UDB04_ST_CTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B1_UDB04_CTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B1_UDB04_ST_CTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B1_UDB04_MSK
#define OUTPUT_UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B1_UDB04_05_ST
#define OUTPUT_UART_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B1_UDB04_MSK
#define OUTPUT_UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B1_UDB04_ST_CTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B1_UDB04_ST_CTL
#define OUTPUT_UART_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B1_UDB04_ST
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B1_UDB07_08_A0
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B1_UDB07_08_A1
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B1_UDB07_08_D0
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B1_UDB07_08_D1
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B1_UDB07_08_F0
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B1_UDB07_08_F1
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B1_UDB07_A0_A1
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__A0_REG CYREG_B1_UDB07_A0
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__A1_REG CYREG_B1_UDB07_A1
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B1_UDB07_D0_D1
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__D0_REG CYREG_B1_UDB07_D0
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__D1_REG CYREG_B1_UDB07_D1
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B1_UDB07_F0_F1
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__F0_REG CYREG_B1_UDB07_F0
#define OUTPUT_UART_BUART_sRX_RxShifter_u0__F1_REG CYREG_B1_UDB07_F1
#define OUTPUT_UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define OUTPUT_UART_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B1_UDB07_08_ST
#define OUTPUT_UART_BUART_sRX_RxSts__3__MASK 0x08u
#define OUTPUT_UART_BUART_sRX_RxSts__3__POS 3
#define OUTPUT_UART_BUART_sRX_RxSts__4__MASK 0x10u
#define OUTPUT_UART_BUART_sRX_RxSts__4__POS 4
#define OUTPUT_UART_BUART_sRX_RxSts__5__MASK 0x20u
#define OUTPUT_UART_BUART_sRX_RxSts__5__POS 5
#define OUTPUT_UART_BUART_sRX_RxSts__MASK 0x38u
#define OUTPUT_UART_BUART_sRX_RxSts__MASK_REG CYREG_B1_UDB07_MSK
#define OUTPUT_UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define OUTPUT_UART_BUART_sRX_RxSts__STATUS_REG CYREG_B1_UDB07_ST
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B1_UDB05_06_A0
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B1_UDB05_06_A1
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B1_UDB05_06_D0
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B1_UDB05_06_D1
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB05_06_ACTL
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B1_UDB05_06_F0
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B1_UDB05_06_F1
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B1_UDB05_A0_A1
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B1_UDB05_A0
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B1_UDB05_A1
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B1_UDB05_D0_D1
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B1_UDB05_D0
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B1_UDB05_D1
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B1_UDB05_ACTL
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B1_UDB05_F0_F1
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B1_UDB05_F0
#define OUTPUT_UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B1_UDB05_F1
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB06_07_A0
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB06_07_A1
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB06_07_D0
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB06_07_D1
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB06_07_F0
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB06_07_F1
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB06_A0_A1
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB06_A0
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB06_A1
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB06_D0_D1
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB06_D0
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB06_D1
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB06_F0_F1
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB06_F0
#define OUTPUT_UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB06_F1
#define OUTPUT_UART_BUART_sTX_TxSts__0__MASK 0x01u
#define OUTPUT_UART_BUART_sTX_TxSts__0__POS 0
#define OUTPUT_UART_BUART_sTX_TxSts__1__MASK 0x02u
#define OUTPUT_UART_BUART_sTX_TxSts__1__POS 1
#define OUTPUT_UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define OUTPUT_UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B1_UDB06_07_ST
#define OUTPUT_UART_BUART_sTX_TxSts__2__MASK 0x04u
#define OUTPUT_UART_BUART_sTX_TxSts__2__POS 2
#define OUTPUT_UART_BUART_sTX_TxSts__3__MASK 0x08u
#define OUTPUT_UART_BUART_sTX_TxSts__3__POS 3
#define OUTPUT_UART_BUART_sTX_TxSts__MASK 0x0Fu
#define OUTPUT_UART_BUART_sTX_TxSts__MASK_REG CYREG_B1_UDB06_MSK
#define OUTPUT_UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define OUTPUT_UART_BUART_sTX_TxSts__STATUS_REG CYREG_B1_UDB06_ST
#define OUTPUT_UART_IntClock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define OUTPUT_UART_IntClock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define OUTPUT_UART_IntClock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define OUTPUT_UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define OUTPUT_UART_IntClock__INDEX 0x01u
#define OUTPUT_UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define OUTPUT_UART_IntClock__PM_ACT_MSK 0x02u
#define OUTPUT_UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define OUTPUT_UART_IntClock__PM_STBY_MSK 0x02u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "GPS_Enhanced"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E159069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
