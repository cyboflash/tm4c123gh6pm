// I've decided to write this file after I saw a post on piazza.com for the edX UT. 6.02X Embedded
// Systems - Shape The World class. Some student partially mapped GPIO registers to a structure. I
// thought it would be nice to have all the registers mapped.
//
// License:
// This software is provided as is. No warranty of any kind. You may use it, modify it, do whatever
// you want with it. It can be used in any projects, open source or commercial. There is only one
// condition for using it. Please include (or do not remove) the orignal authors comment lines
// somewhere at the top of the file
//
// Original authors: Rail Shafigulin and anonymous student from UT. 6.02X Embedded Systems - Shape
//                   the world class.
//
// By the way if anyone is able to track down this student I would gladly include his/her name to
// this file if he/she doesn't mind.

#include "tm4c123gh6pm_register_map.h"

/* Mapping */
PeripheralsRegisterBasePtr pPeripherals = (PeripheralsRegisterBasePtr)PERIPHERALS_REGISTER_BASE_ADDR;

GPIORegisterBasePtr pPortA = (GPIORegisterBasePtr)GPIO_APB_PORTA_REGISTER_BASE_ADDR;
GPIORegisterBasePtr pPortB = (GPIORegisterBasePtr)GPIO_APB_PORTB_REGISTER_BASE_ADDR;
GPIORegisterBasePtr pPortC = (GPIORegisterBasePtr)GPIO_APB_PORTC_REGISTER_BASE_ADDR;
GPIORegisterBasePtr pPortD = (GPIORegisterBasePtr)GPIO_APB_PORTD_REGISTER_BASE_ADDR;
GPIORegisterBasePtr pPortE = (GPIORegisterBasePtr)GPIO_APB_PORTE_REGISTER_BASE_ADDR;
GPIORegisterBasePtr pPortF = (GPIORegisterBasePtr)GPIO_APB_PORTF_REGISTER_BASE_ADDR;

GPTMRegisterBasePtr p1632Timer0 = (GPTMRegisterBasePtr)GPTM_16_32_TIMER0;
GPTMRegisterBasePtr p1632Timer1 = (GPTMRegisterBasePtr)GPTM_16_32_TIMER1;
GPTMRegisterBasePtr p1632Timer2 = (GPTMRegisterBasePtr)GPTM_16_32_TIMER2;
GPTMRegisterBasePtr p1632Timer3 = (GPTMRegisterBasePtr)GPTM_16_32_TIMER3;
GPTMRegisterBasePtr p1632Timer4 = (GPTMRegisterBasePtr)GPTM_16_32_TIMER4;
GPTMRegisterBasePtr p1632Timer5 = (GPTMRegisterBasePtr)GPTM_16_32_TIMER5;
GPTMRegisterBasePtr p3264Timer0 = (GPTMRegisterBasePtr)GPTM_32_64_TIMER0;
GPTMRegisterBasePtr p3264Timer1 = (GPTMRegisterBasePtr)GPTM_32_64_TIMER1;
GPTMRegisterBasePtr p3264Timer2 = (GPTMRegisterBasePtr)GPTM_32_64_TIMER2;
GPTMRegisterBasePtr p3264Timer3 = (GPTMRegisterBasePtr)GPTM_32_64_TIMER3;
GPTMRegisterBasePtr p3264Timer4 = (GPTMRegisterBasePtr)GPTM_32_64_TIMER4;
GPTMRegisterBasePtr p3264Timer5 = (GPTMRegisterBasePtr)GPTM_32_64_TIMER5;

UARTRegisterBasePtr pUart0 = (UARTRegisterBasePtr)UART0_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart1 = (UARTRegisterBasePtr)UART1_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart2 = (UARTRegisterBasePtr)UART2_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart3 = (UARTRegisterBasePtr)UART3_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart4 = (UARTRegisterBasePtr)UART4_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart5 = (UARTRegisterBasePtr)UART5_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart6 = (UARTRegisterBasePtr)UART6_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart7 = (UARTRegisterBasePtr)UART7_REGISTER_BASE_ADDR;

SSIRegisterBasePtr pSsi0 = (SSIRegisterBasePtr)SSI0_REGISTER_BASE_ADDR;
SSIRegisterBasePtr pSsi1 = (SSIRegisterBasePtr)SSI1_REGISTER_BASE_ADDR;
SSIRegisterBasePtr pSsi2 = (SSIRegisterBasePtr)SSI2_REGISTER_BASE_ADDR;
SSIRegisterBasePtr pSsi3 = (SSIRegisterBasePtr)SSI3_REGISTER_BASE_ADDR;

ADCRegisterBasePtr pAdc0 = (ADCRegisterBasePtr)ADC0_REGISTER_BASE_ADDR;
ADCRegisterBasePtr pAdc1 = (ADCRegisterBasePtr)ADC1_REGISTER_BASE_ADDR;

SystemControlRegisterBasePtr pSystemControl = (SystemControlRegisterBasePtr)SYSTEM_CONTROL_REGISTER_BASE_ADDR;
