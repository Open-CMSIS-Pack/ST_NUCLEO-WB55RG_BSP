/*---------------------------------------------------------------------------
 * Copyright (c) 2025 Arm Limited (or its affiliates).
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#ifndef NUCLEO_WB55RG_H_
#define NUCLEO_WB55RG_H_

#include "GPIO_STM32.h"
#include "Driver_I2C.h"
#include "Driver_SPI.h"
#include "Driver_USART.h"
#include "Driver_USBD.h"

// Arduino Connector Digital I/O
#define ARDUINO_UNO_D2      GPIO_PIN_ID_PORTC(6U)
#define ARDUINO_UNO_D3      GPIO_PIN_ID_PORTA(10U)
#define ARDUINO_UNO_D4      GPIO_PIN_ID_PORTC(10U)
#define ARDUINO_UNO_D5      GPIO_PIN_ID_PORTA(15U)
#define ARDUINO_UNO_D6      GPIO_PIN_ID_PORTA(8U)
#define ARDUINO_UNO_D7      GPIO_PIN_ID_PORTC(13U)
#define ARDUINO_UNO_D8      GPIO_PIN_ID_PORTC(12U)
#define ARDUINO_UNO_D9      GPIO_PIN_ID_PORTA(9U)
#define ARDUINO_UNO_D10     GPIO_PIN_ID_PORTA(4U)
#define ARDUINO_UNO_D14     GPIO_PIN_ID_PORTC(0U)
#define ARDUINO_UNO_D15     GPIO_PIN_ID_PORTC(1U)
#define ARDUINO_UNO_D16     GPIO_PIN_ID_PORTA(1U)
#define ARDUINO_UNO_D17     GPIO_PIN_ID_PORTA(0U)
#define ARDUINO_UNO_D18     GPIO_PIN_ID_PORTC(3U)
#define ARDUINO_UNO_D19     GPIO_PIN_ID_PORTC(2U)

// CMSIS Driver instances on Arduino Connector
#define ARDUINO_UNO_I2C     1           // I2C1
#define ARDUINO_UNO_SPI     1           // SPI1
#define ARDUINO_UNO_UART    21          // LPUART1

// CMSIS Driver instances of Board peripherals
#define CMSIS_DRIVER_USBD   0           // Driver_USBD0

// CMSIS Driver instance for STDIO retarget
#define RETARGET_STDIO_UART 1

// CMSIS Drivers
extern ARM_DRIVER_I2C       ARM_Driver_I2C_(ARDUINO_UNO_I2C);           // Arduino I2C
extern ARM_DRIVER_SPI       ARM_Driver_SPI_(ARDUINO_UNO_SPI);           // Arduino SPI
extern ARM_DRIVER_USART     ARM_Driver_USART_(ARDUINO_UNO_UART);        // Arduino UART
extern ARM_DRIVER_USART     ARM_Driver_USART_(RETARGET_STDIO_UART);     // ST-LINK
extern ARM_DRIVER_USBD      ARM_Driver_USBD_(CMSIS_DRIVER_USBD);        // USB Device

#ifdef   CMSIS_shield_header
#include CMSIS_shield_header
#endif

#endif // NUCLEO_WB55RG_H_
