// I've decided to write this file after I saw a post on piazza.com for the edX UT. 6.02X Embedded
// Systems - Shape The World class. Some student partially mapped GPIO registers to a structure. I
// thought it would be nice to have all the registers mapped.
//
// License:
// This software is provided as is. No warranty of any kind. You may use it, modify it, do whatever
// you want with it. It can be used in any projects, open source or commercial. There is only one
// condition for using it. Please include (or do not remove) the 'Orignal authors:' comment lines
// somewhere at the top of the file, i.e. the following lines
//
// Original authors: Rail Shafigulin and anonymous student from UT. 6.02X Embedded Systems - Shape
//                   the world class.
//
// By the way if anyone is able to track down this student I would gladly include his/her name to
// this file if he/she doesn't mind.

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

// After clock for the port is turned on, it needs time to settle. Bitwise OR operation at the end
// of the macro simply consumes cycles to give time for the clock to settle.
#define TURN_ON_PORT_CLK(PORT)                                              \
  do {                                                                      \
    pLegacySystemControl->RCGC2.field.GPIO##PORT = 1;                       \
    pLegacySystemControl->RCGC2.value |= pLegacySystemControl->RCGC2.value; \
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

// After clock for the port is turned on, it needs time to settle. Bitwise OR operation at the end
// of the macro simply consumes cycles to give time for the clock to settle.
#define TURN_ON_ADC_CLK(NBR)                                                \
  do {                                                                      \
    pLegacySystemControl->RCGC0.field.ADC##NBR = 1;                         \
    pLegacySystemControl->RCGC0.value |= pLegacySystemControl->RCGC0.value; \
  } while(0)

#endif // COMMON_DEFINES_H
