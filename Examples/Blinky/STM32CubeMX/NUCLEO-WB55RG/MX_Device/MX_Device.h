/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 15/01/2025 09:04:45
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                        PB7
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_7
#define MX_USART1_RX_GPIOx                      GPIOB
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                        PB6
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_6
#define MX_USART1_TX_GPIOx                      GPIOB
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                  1

/* Handle */
#define MX_USB_HANDLE                           hpcd_USB_FS

/* Pins */

/* USB_DM */
#define MX_USB_DM_Pin                           PA11
#define MX_USB_DM_GPIO_Pin                      GPIO_PIN_11
#define MX_USB_DM_GPIOx                         GPIOA
#define MX_USB_DM_GPIO_Mode                     GPIO_MODE_AF_PP
#define MX_USB_DM_GPIO_PuPd                     GPIO_NOPULL
#define MX_USB_DM_GPIO_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_USB_DM_GPIO_AF                       GPIO_AF10_USB

/* USB_DP */
#define MX_USB_DP_Pin                           PA12
#define MX_USB_DP_GPIO_Pin                      GPIO_PIN_12
#define MX_USB_DP_GPIOx                         GPIOA
#define MX_USB_DP_GPIO_Mode                     GPIO_MODE_AF_PP
#define MX_USB_DP_GPIO_PuPd                     GPIO_NOPULL
#define MX_USB_DP_GPIO_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_USB_DP_GPIO_AF                       GPIO_AF10_USB

#endif  /* MX_DEVICE_H__ */
