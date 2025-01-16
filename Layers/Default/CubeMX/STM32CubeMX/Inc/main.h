/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wbxx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
extern int stdio_init   (void);
extern int app_main     (void);
extern int shield_setup (void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ARD_D7_Pin GPIO_PIN_13
#define ARD_D7_GPIO_Port GPIOC
#define ARD_D7_EXTI_IRQn EXTI15_10_IRQn
#define RCC_OSC32_IN_Pin GPIO_PIN_14
#define RCC_OSC32_IN_GPIO_Port GPIOC
#define RCC_OSC32_OUT_Pin GPIO_PIN_15
#define RCC_OSC32_OUT_GPIO_Port GPIOC
#define ARD_15_Pin GPIO_PIN_8
#define ARD_15_GPIO_Port GPIOB
#define ARD_14_Pin GPIO_PIN_9
#define ARD_14_GPIO_Port GPIOB
#define ARD_A0_Pin GPIO_PIN_0
#define ARD_A0_GPIO_Port GPIOC
#define ARD_A0_EXTI_IRQn EXTI0_IRQn
#define ARD_A2_Pin GPIO_PIN_1
#define ARD_A2_GPIO_Port GPIOA
#define ARD_A2_EXTI_IRQn EXTI1_IRQn
#define ARD_D1_Pin GPIO_PIN_2
#define ARD_D1_GPIO_Port GPIOA
#define ARD_D0_Pin GPIO_PIN_3
#define ARD_D0_GPIO_Port GPIOA
#define SPI1_CLK_Pin GPIO_PIN_5
#define SPI1_CLK_GPIO_Port GPIOA
#define SPI1_MISO_Pin GPIO_PIN_6
#define SPI1_MISO_GPIO_Port GPIOA
#define SPI1_MOSI_Pin GPIO_PIN_7
#define SPI1_MOSI_GPIO_Port GPIOA
#define ARD_D6_Pin GPIO_PIN_8
#define ARD_D6_GPIO_Port GPIOA
#define ARD_D6_EXTI_IRQn EXTI9_5_IRQn
#define ARD_D9_Pin GPIO_PIN_9
#define ARD_D9_GPIO_Port GPIOA
#define ARD_D9_EXTI_IRQn EXTI9_5_IRQn
#define B1_Pin GPIO_PIN_4
#define B1_GPIO_Port GPIOC
#define LD2_Pin GPIO_PIN_0
#define LD2_GPIO_Port GPIOB
#define LD3_Pin GPIO_PIN_1
#define LD3_GPIO_Port GPIOB
#define ARD_D2_Pin GPIO_PIN_6
#define ARD_D2_GPIO_Port GPIOC
#define ARD_D2_EXTI_IRQn EXTI9_5_IRQn
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define JTMS_Pin GPIO_PIN_13
#define JTMS_GPIO_Port GPIOA
#define JTCK_Pin GPIO_PIN_14
#define JTCK_GPIO_Port GPIOA
#define ARD_D5_Pin GPIO_PIN_15
#define ARD_D5_GPIO_Port GPIOA
#define ARD_D5_EXTI_IRQn EXTI15_10_IRQn
#define ARD_D4_Pin GPIO_PIN_10
#define ARD_D4_GPIO_Port GPIOC
#define ARD_D4_EXTI_IRQn EXTI15_10_IRQn
#define ARD_D8_Pin GPIO_PIN_12
#define ARD_D8_GPIO_Port GPIOC
#define ARD_D8_EXTI_IRQn EXTI15_10_IRQn
#define B2_Pin GPIO_PIN_0
#define B2_GPIO_Port GPIOD
#define B3_Pin GPIO_PIN_1
#define B3_GPIO_Port GPIOD
#define JTDO_Pin GPIO_PIN_3
#define JTDO_GPIO_Port GPIOB
#define LD1_Pin GPIO_PIN_5
#define LD1_GPIO_Port GPIOB
#define STLINK_RX_Pin GPIO_PIN_6
#define STLINK_RX_GPIO_Port GPIOB
#define STLINK_TX_Pin GPIO_PIN_7
#define STLINK_TX_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
