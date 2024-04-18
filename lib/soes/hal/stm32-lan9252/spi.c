/****************************************************************
 * Includes
 ****************************************************************/
#include "spi.h"


/****************************************************************
 * Data
 ****************************************************************/
/** module SPI handle */
static SPI_HandleTypeDef SpiHandle;


/****************************************************************
 * Private function prototypes
 ****************************************************************/
/** transfer a byte over SPI */
inline static uint8_t spi_transfer(uint8_t byte);


/****************************************************************
 * Public functions
 ****************************************************************/
void spi_setup(void)
{
	/* data */
	GPIO_InitTypeDef gpio = {0};
	SPI_InitTypeDef *cfg = &SpiHandle.Init;

	/**
	 * SPI1 GPIO Configuration:
	 *  - PA5 -> SPI1_SCK
	 *  - PA6 -> SPI1_MISO
	 *  - PA7 -> SPI1_MOSI
	 */
	__HAL_RCC_SPI1_CLK_ENABLE();  //Enable SPI1 clock
	__HAL_RCC_GPIOA_CLK_ENABLE(); //Enable GPIOA clock

	/* SPI GPIO Configuration */
	gpio.Pin = GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7; //SCK, MISO, MOSI
	gpio.Mode = GPIO_MODE_AF_PP;
	gpio.Pull = GPIO_PULLDOWN;
	gpio.Speed = GPIO_SPEED_FREQ_HIGH;
	gpio.Alternate = GPIO_AF5_SPI1; //SPI1 alternate function
	HAL_GPIO_Init(GPIOA, &gpio);

	/* CS */
	gpio.Pin = GPIO_PIN_4; //CS
	gpio.Mode = GPIO_MODE_OUTPUT_PP;
	gpio.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOA, &gpio);

	/* SPI Configuration */
	cfg->Direction = SPI_DIRECTION_2LINES;
	cfg->DataSize = SPI_DATASIZE_8BIT;
	cfg->CLKPolarity = SPI_POLARITY_LOW;
	cfg->CLKPhase = SPI_PHASE_1EDGE;
	cfg->NSS = SPI_NSS_SOFT;
	cfg->BaudRatePrescaler = SPI_BAUDRATEPRESCALER_2;
	cfg->FirstBit = SPI_FIRSTBIT_MSB;
	cfg->CRCCalculation = SPI_CRCCALCULATION_DISABLE;
	cfg->Mode = SPI_MODE_MASTER;

	/* initialize SPI */
	HAL_SPI_Init(&SpiHandle);
}

void spi_select(int8_t board)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
}

void spi_unselect(int8_t board)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
}

void write(int8_t board, uint8_t *data, uint8_t size)
{
	for (int i = 0; i < size; ++i)
	{
		spi_transfer(data[i]);
	}
}

void read(int8_t board, uint8_t *result, uint8_t size)
{
	for (int i = 0; i < size; ++i)
	{
		result[i] = spi_transfer(DUMMY_BYTE);
	}
}

void spi_bidirectionally_transfer(int8_t board, uint8_t *result, uint8_t *data, uint8_t size)
{
	for (int i = 0; i < size; ++i)
    {
        result[i] = spi_transfer(data[i]);
    }
}


/****************************************************************
 * Private functions
 ****************************************************************/
inline static uint8_t spi_transfer(uint8_t byte)
{

#ifdef SPI_GLOBAL_HANDLE

	/* transmit and receive using global handle */
	HAL_SPI_TransmitReceive(&hspi1, &byte, &byte, 1, HAL_MAX_DELAY);

#else

	/* write data to tx-buffer */
	SPIX_ESC->DR = byte;

	/* wait until rx-buffer is not empty */
	while ((SPIX_ESC->SR & SPI_SR_RXNE) == RESET);

	/* read data from the rx-buffer */
	byte = SPIX_ESC->DR;

#endif

	return byte;
}
