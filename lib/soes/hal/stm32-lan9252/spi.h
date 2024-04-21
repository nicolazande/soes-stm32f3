#ifndef SRC_APP_SPI_H_
#define SRC_APP_SPI_H_

/****************************************************************
 * Includes
 ****************************************************************/
#include <stdint.h>
#include "stm32f3xx_hal.h"


/****************************************************************
 * Defines
 ****************************************************************/
/* STM32F3 */
#define SCS_LOW                         0
#define SCS_HIGH                        1
#define SPI_ESC                         SPI1
#define ESC_RCC_APB2PERIPH_SPIX         RCC_APB2ENR_SPI1EN
#define ESC_GPIO_AF_SPI                 GPIO_AF5_SPI1
#define ESC_RCC_APB1PERIPH_GPIOX_CTRL   RCC_AHBENR_GPIOAEN
#define ESC_GPIO_CTRL                   GPIOA
#define ESC_GPIO_PIN_SCK                GPIO_PIN_5
#define ESC_GPIO_PIN_MISO               GPIO_PIN_6
#define ESC_GPIO_PIN_MOSI               GPIO_PIN_7
#define ESC_GPIO_CS                     GPIOA
#define ESC_GPIO_PIN_CS                 GPIO_PIN_4
#define ESC_SPI_CLK_ENABLE()			__HAL_RCC_SPI1_CLK_ENABLE()
#define ESC_SPI_SCK_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOA_CLK_ENABLE()
#define ESC_SPI_MISO_GPIO_CLK_ENABLE()	__HAL_RCC_GPIOA_CLK_ENABLE()
#define ESC_SPI_MOSI_GPIO_CLK_ENABLE()	__HAL_RCC_GPIOA_CLK_ENABLE()
#define ESC_SPI_FORCE_RESET()           __HAL_RCC_SPI1_FORCE_RESET()
#define ESC_SPI_RELEASE_RESET()         __HAL_RCC_SPI1_RELEASE_RESET()

/* LAN9252 */
#define SPI_ESC_SCS                    SPI_NSS_SOFT
#define SCS_ACTIVE_POLARITY            SCS_LOW
#define SPI_ESC_CPOL                   SPI_POLARITY_LOW
#define SPI_ESC_CPHA                   SPI_PHASE_1EDGE


/****************************************************************
 * Public functions
 ****************************************************************/
/** setup SPI */
void spi_setup(void);

/** de-initialize SPI */
void spi_deinit(void);

/** select SPI (low) */
void spi_select(int8_t board);

/** unselect SPI (high) */
void spi_unselect(int8_t board);

/** perform write operation */
void write(int8_t board, uint8_t *data, uint8_t size);

/** perform read operation */
void read(int8_t board, uint8_t *result, uint8_t size);

/** perform both read and write operations */
void spi_bidirectionally_transfer(int8_t board, uint8_t *result, uint8_t *data, uint8_t size);

#endif /* SRC_APP_SPI_H_ */
