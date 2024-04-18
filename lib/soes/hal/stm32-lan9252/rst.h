#ifndef __HAL_NRST_H__
#define __HAL_NRST_H__

/****************************************************************
 * Includes
 ****************************************************************/
#include <stdint.h>
#include "stm32f3xx_hal.h"


/****************************************************************
 * Defines
 ****************************************************************/
#define ESC_RCC_APB1PERIPH_GPIOX_RSTN   RCC_AHBENR_GPIOAEN
#define ESC_GPIOX_RSTN                  GPIOA
#define ESC_GPIO_Pin_RSTN               GPIO_PIN_2


/****************************************************************
 * Public functions
 ****************************************************************/
/** initialize NRST pin */
void rst_setup(void);

/** drive NRST pin low */
void rst_low(void);

/** drive NRST pin high */
void rst_high(void);

/** prepare NRST pin for checking its state */
void rst_check_start(void);

/** check if NRST pin is high */
uint8_t is_esc_reset(void);

#endif /* __HAL_NRST_H__ */
