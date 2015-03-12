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
PeripheralsRegisterMapPtr pPeripherals = (PeripheralsRegisterMapPtr)PERIPHERALS_REGISTER_BASE_ADDR;

GPIORegisterMapPtr pPortA = (GPIORegisterMapPtr)GPIO_APB_PORTA_REGISTER_BASE_ADDR;
GPIORegisterMapPtr pPortB = (GPIORegisterMapPtr)GPIO_APB_PORTB_REGISTER_BASE_ADDR;
GPIORegisterMapPtr pPortC = (GPIORegisterMapPtr)GPIO_APB_PORTC_REGISTER_BASE_ADDR;
GPIORegisterMapPtr pPortD = (GPIORegisterMapPtr)GPIO_APB_PORTD_REGISTER_BASE_ADDR;
GPIORegisterMapPtr pPortE = (GPIORegisterMapPtr)GPIO_APB_PORTE_REGISTER_BASE_ADDR;
GPIORegisterMapPtr pPortF = (GPIORegisterMapPtr)GPIO_APB_PORTF_REGISTER_BASE_ADDR;

GPTMRegisterMapPtr p1632Timer0 = (GPTMRegisterMapPtr)GPTM_16_32_TIMER0;
GPTMRegisterMapPtr p1632Timer1 = (GPTMRegisterMapPtr)GPTM_16_32_TIMER1;
GPTMRegisterMapPtr p1632Timer2 = (GPTMRegisterMapPtr)GPTM_16_32_TIMER2;
GPTMRegisterMapPtr p1632Timer3 = (GPTMRegisterMapPtr)GPTM_16_32_TIMER3;
GPTMRegisterMapPtr p1632Timer4 = (GPTMRegisterMapPtr)GPTM_16_32_TIMER4;
GPTMRegisterMapPtr p1632Timer5 = (GPTMRegisterMapPtr)GPTM_16_32_TIMER5;
GPTMRegisterMapPtr p3264Timer0 = (GPTMRegisterMapPtr)GPTM_32_64_TIMER0;
GPTMRegisterMapPtr p3264Timer1 = (GPTMRegisterMapPtr)GPTM_32_64_TIMER1;
GPTMRegisterMapPtr p3264Timer2 = (GPTMRegisterMapPtr)GPTM_32_64_TIMER2;
GPTMRegisterMapPtr p3264Timer3 = (GPTMRegisterMapPtr)GPTM_32_64_TIMER3;
GPTMRegisterMapPtr p3264Timer4 = (GPTMRegisterMapPtr)GPTM_32_64_TIMER4;
GPTMRegisterMapPtr p3264Timer5 = (GPTMRegisterMapPtr)GPTM_32_64_TIMER5;

UARTRegisterMapPtr pUart0 = (UARTRegisterMapPtr)UART0_REGISTER_BASE_ADDR;
UARTRegisterMapPtr pUart1 = (UARTRegisterMapPtr)UART1_REGISTER_BASE_ADDR;
UARTRegisterMapPtr pUart2 = (UARTRegisterMapPtr)UART2_REGISTER_BASE_ADDR;
UARTRegisterMapPtr pUart3 = (UARTRegisterMapPtr)UART3_REGISTER_BASE_ADDR;
UARTRegisterMapPtr pUart4 = (UARTRegisterMapPtr)UART4_REGISTER_BASE_ADDR;
UARTRegisterMapPtr pUart5 = (UARTRegisterMapPtr)UART5_REGISTER_BASE_ADDR;
UARTRegisterMapPtr pUart6 = (UARTRegisterMapPtr)UART6_REGISTER_BASE_ADDR;
UARTRegisterMapPtr pUart7 = (UARTRegisterMapPtr)UART7_REGISTER_BASE_ADDR;

SSIRegisterMapPtr pSsi0 = (SSIRegisterMapPtr)SSI0_REGISTER_BASE_ADDR;
SSIRegisterMapPtr pSsi1 = (SSIRegisterMapPtr)SSI1_REGISTER_BASE_ADDR;
SSIRegisterMapPtr pSsi2 = (SSIRegisterMapPtr)SSI2_REGISTER_BASE_ADDR;
SSIRegisterMapPtr pSsi3 = (SSIRegisterMapPtr)SSI3_REGISTER_BASE_ADDR;

ADCRegisterMapPtr pAdc0 = (ADCRegisterMapPtr)ADC0_REGISTER_BASE_ADDR;
ADCRegisterMapPtr pAdc1 = (ADCRegisterMapPtr)ADC1_REGISTER_BASE_ADDR;

SystemControlRegisterMapPtr pSystemControl = (SystemControlRegisterMapPtr)SYSTEM_CONTROL_REGISTER_BASE_ADDR;
