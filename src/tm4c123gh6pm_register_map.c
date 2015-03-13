// I've decided to write this file after I saw a post on piazza.com for the edX UT. 6.02X Embedded
// Systems - Shape The World class. Some student partially mapped GPIO registers to a structure. I
// thought it would be nice to have all the registers mapped.
//
// License:
// This software is provided as is. No warranty of any kind. Original authors are not responsible for
// any kind of damage weather accidental or intentional. You may use it, modify it, do whatever
// you want with it. It can be used in any projects, open source or commercial. There is only one
// condition for using it. Please include (or do not remove) the original authors comment lines
// somewhere at the top of the file. After all we did a large portion of the work for you.
// Be kind and give us some credit.
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

GPTMRegisterMapPtr pTimer0  = (GPTMRegisterMapPtr)GPTM_TIMER0;
GPTMRegisterMapPtr pTimer1  = (GPTMRegisterMapPtr)GPTM_TIMER1;
GPTMRegisterMapPtr pTimer2  = (GPTMRegisterMapPtr)GPTM_TIMER2;
GPTMRegisterMapPtr pTimer3  = (GPTMRegisterMapPtr)GPTM_TIMER3;
GPTMRegisterMapPtr pTimer4  = (GPTMRegisterMapPtr)GPTM_TIMER4;
GPTMRegisterMapPtr pTimer5  = (GPTMRegisterMapPtr)GPTM_TIMER5;
GPTMRegisterMapPtr pWtimer0 = (GPTMRegisterMapPtr)GPTM_WTIMER0;
GPTMRegisterMapPtr pWtimer1 = (GPTMRegisterMapPtr)GPTM_WTIMER1;
GPTMRegisterMapPtr pWtimer2 = (GPTMRegisterMapPtr)GPTM_WTIMER2;
GPTMRegisterMapPtr pWtimer3 = (GPTMRegisterMapPtr)GPTM_WTIMER3;
GPTMRegisterMapPtr pWtimer4 = (GPTMRegisterMapPtr)GPTM_WTIMER4;
GPTMRegisterMapPtr pWtimer5 = (GPTMRegisterMapPtr)GPTM_WTIMER5;

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

SystemExceptionRegisterMapPtr pSystemException = (SystemExceptionRegisterMapPtr)SYSTEM_EXCEPTION_REGISTER_BASE_ADDR;
