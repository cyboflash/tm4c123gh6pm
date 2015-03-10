#ifndef COMMON_DEFINES_H
#define COMMON_DEFINES_H

#include "tm4c123gh6pm_register_map.h"
#include <stdint.h>

#define GPIO_PIN_0 ((uint32_t)0x00000001))
#define GPIO_PIN_1 ((uint32_t)0x00000002))
#define GPIO_PIN_2 ((uint32_t)0x00000004))
#define GPIO_PIN_3 ((uint32_t)0x00000008))
#define GPIO_PIN_4 ((uint32_t)0x00000010))
#define GPIO_PIN_5 ((uint32_t)0x00000020))
#define GPIO_PIN_6 ((uint32_t)0x00000040))
#define GPIO_PIN_7 ((uint32_t)0x00000080))

/* GPIODATA offset (datasheet section 10.2.1.2) */
#define GPIODATA_ADDR_SHIFT ((uint8_t)0x02)
#define GPIODATA_PIN_0      ((uint32_t)(GPIO_PIN_0 << GPIODATA_ADDR_SHIFT))
#define GPIODATA_PIN_1      ((uint32_t)(GPIO_PIN_1 << GPIODATA_ADDR_SHIFT))
#define GPIODATA_PIN_2      ((uint32_t)(GPIO_PIN_2 << GPIODATA_ADDR_SHIFT))
#define GPIODATA_PIN_3      ((uint32_t)(GPIO_PIN_3 << GPIODATA_ADDR_SHIFT))
#define GPIODATA_PIN_4      ((uint32_t)(GPIO_PIN_4 << GPIODATA_ADDR_SHIFT))
#define GPIODATA_PIN_5      ((uint32_t)(GPIO_PIN_5 << GPIODATA_ADDR_SHIFT))
#define GPIODATA_PIN_6      ((uint32_t)(GPIO_PIN_6 << GPIODATA_ADDR_SHIFT))
#define GPIODATA_PIN_7      ((uint32_t)(GPIO_PIN_7 << GPIODATA_ADDR_SHIFT))
#define GPIODATA_PIN_ALL    ((uint32_t)(0xFF << GPIODATA_ADDR_SHIFT))

#define LOCK ((uint32_t)0x4C4F434B)

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

#define TURN_ON_ADC_CLK(NBR)                                    \
  do {                                                          \
    pSystemControl->RCGC0.field.ADC##NBR = 1;                   \
    pSystemControl->RCGC0.value |= pSystemControl->RCGC0.value; \
  } while(0)

#endif // COMMON_DEFINES_H
