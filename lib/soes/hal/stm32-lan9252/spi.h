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
#define SCS_LOW                           0
#define SCS_HIGH                          1
#define SPIX_ESC                        SPI1
#define ESC_RCC_APB2PERIPH_SPIX         RCC_APB2ENR_SPI1EN
#define ESC_GPIOX_AF_SPIx               GPIO_AF5_SPI1
#define ESC_RCC_APB1PERIPH_GPIOX_CTRL   RCC_AHBENR_GPIOAEN
#define ESC_GPIOX_CTRL                  GPIOA
#define ESC_GPIO_Pin_SCK                GPIO_PIN_5
#define ESC_GPIO_PinSourceSCK           GPIO_PIN_SOURCE_5
#define ESC_GPIO_Pin_MISO               GPIO_PIN_6
#define ESC_GPIO_PinSource_MISO         GPIO_PIN_SOURCE_6
#define ESC_GPIO_Pin_MOSI               GPIO_PIN_7
#define ESC_GPIO_PinSource_MOSI         GPIO_PIN_SOURCE_7
#define ESC_RCC_APB1PERIPH_GPIOX_CS     RCC_AHBENR_GPIOAEN
#define ESC_GPIOX_CS                    GPIOA
#define ESC_GPIO_Pin_CS                 GPIO_PIN_4
#define DUMMY_BYTE 0xFF
#define tout 5000

/* LAN9252 */
#define SPIX_ESC_SCS                    SPI_NSS_SOFT
#define SCS_ACTIVE_POLARITY             SCS_LOW
#define SPIX_ESC_CPOL                   SPI_POLARITY_LOW
#define SPIX_ESC_CPHA                   SPI_PHASE_1EDGE


/****************************************************************
 * Public functions
 ****************************************************************/
/** setup SPI according to application settings */
void spi_setup(void);

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
