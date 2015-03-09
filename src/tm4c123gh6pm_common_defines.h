#ifndef COMMON_DEFINES_H
#define COMMON_DEFINES_H

#include "tm4c123gh6pm_register_map.h"

#define GPIO_PIN_0 (0x00000001)
#define GPIO_PIN_1 (0x00000002)
#define GPIO_PIN_2 (0x00000004)
#define GPIO_PIN_3 (0x00000008)
#define GPIO_PIN_4 (0x00000010)
#define GPIO_PIN_5 (0x00000020)
#define GPIO_PIN_6 (0x00000040)
#define GPIO_PIN_7 (0x00000080)

/* GPIODATA offset (datasheet section 10.2.1.2) */
#define GPIODATA_ADDR_SHIFT (0x02)
#define GPIODATA_PIN_0      (GPIO_PIN_0 << GPIODATA_ADDR_SHIFT)
#define GPIODATA_PIN_1      (GPIO_PIN_1 << GPIODATA_ADDR_SHIFT)
#define GPIODATA_PIN_2      (GPIO_PIN_2 << GPIODATA_ADDR_SHIFT)
#define GPIODATA_PIN_3      (GPIO_PIN_3 << GPIODATA_ADDR_SHIFT)
#define GPIODATA_PIN_4      (GPIO_PIN_4 << GPIODATA_ADDR_SHIFT)
#define GPIODATA_PIN_5      (GPIO_PIN_5 << GPIODATA_ADDR_SHIFT)
#define GPIODATA_PIN_6      (GPIO_PIN_6 << GPIODATA_ADDR_SHIFT)
#define GPIODATA_PIN_7      (GPIO_PIN_7 << GPIODATA_ADDR_SHIFT)
#define GPIODATA_PIN_ALL    (0xFF << GPIODATA_ADDR_SHIFT)

#define LOCK ((unsigned long)0x4C4F434B)

#define UNLOCK_PORT(PORT)        \
  do {                           \
    pPort##PORT->GPIOLOCK= LOCK; \
  } while(0)

#define TURN_ON_PORT_CLK(PORT)                                  \
  do {                                                          \
    pSystemControl->RCGC2.field.GPIO##PORT = 1;                 \
    pSystemControl->RCGC2.value |= pSystemControl->RCGC2.value; \
  } while(0)

#define SET_PORT_PINS_HIGH(PORT, PINS)                           \
  do {                                                           \
    pPort##PORT->GPIODATA[(PINS) << GPIODATA_ADDR_SHIFT] = 0xFF; \
  } while(0)

#define SET_PORT_PINS_LOW(PORT, PINS)                         \
  do {                                                        \
    pPort##PORT->GPIODATA[(PINS) << GPIODATA_ADDR_SHIFT] = 0; \
  } while(0)

#define TOGGLE_PORT_PINS(PORT, PINS)                              \
  do {                                                            \
    pPort##PORT->GPIODATA[(PINS) << GPIODATA_ADDR_SHIFT] ^= 0xFF; \
  } while(0)

#define TURN_ON_ADC_CLK(NBR)                                  \
  do {                                                          \
    pSystemControl->RCGC0.field.ADC##NBR = 1;                 \
  } while(0)

#endif // COMMON_DEFINES_H
