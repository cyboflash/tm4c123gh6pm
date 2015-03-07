#include "tm4c123gh6pm_register_map.h"

/* Mapping */
PeripheralsRegisterBasePtr pPeripherals = (PeripheralsRegisterBasePtr)PERIPHERALS_REGISTER_BASE_ADDR;

GPIORegisterBasePtr pPortA = (GPIORegisterBasePtr)GPIO_APB_PORTA_REGISTER_BASE_ADDR;
GPIORegisterBasePtr pPortB = (GPIORegisterBasePtr)GPIO_APB_PORTB_REGISTER_BASE_ADDR;
GPIORegisterBasePtr pPortC = (GPIORegisterBasePtr)GPIO_APB_PORTC_REGISTER_BASE_ADDR;
GPIORegisterBasePtr pPortD = (GPIORegisterBasePtr)GPIO_APB_PORTD_REGISTER_BASE_ADDR;
GPIORegisterBasePtr pPortE = (GPIORegisterBasePtr)GPIO_APB_PORTE_REGISTER_BASE_ADDR;
GPIORegisterBasePtr pPortF = (GPIORegisterBasePtr)GPIO_APB_PORTF_REGISTER_BASE_ADDR;

UARTRegisterBasePtr pUart0 = (UARTRegisterBasePtr)UART0_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart1 = (UARTRegisterBasePtr)UART1_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart2 = (UARTRegisterBasePtr)UART2_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart3 = (UARTRegisterBasePtr)UART3_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart4 = (UARTRegisterBasePtr)UART4_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart5 = (UARTRegisterBasePtr)UART5_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart6 = (UARTRegisterBasePtr)UART6_REGISTER_BASE_ADDR;
UARTRegisterBasePtr pUart7 = (UARTRegisterBasePtr)UART7_REGISTER_BASE_ADDR;

ADCRegisterBasePtr pAdc0 = (ADCRegisterBasePtr)ADC0_REGISTER_BASE_ADDR;
ADCRegisterBasePtr pAdc1 = (ADCRegisterBasePtr)ADC1_REGISTER_BASE_ADDR;

SystemControlRegisterBasePtr pSystemControl = (SystemControlRegisterBasePtr)SYSTEM_CONTROL_REGISTER_BASE_ADDR;
