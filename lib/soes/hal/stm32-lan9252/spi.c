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

	/* SPI Configuration */
	SpiHandle.Instance = SPI_ESC;
	SpiHandle.Init.Direction = SPI_DIRECTION_2LINES;
	SpiHandle.Init.DataSize = SPI_DATASIZE_8BIT;
	SpiHandle.Init.CLKPolarity = SPI_POLARITY_LOW;
	SpiHandle.Init.CLKPhase = SPI_PHASE_1EDGE;
	SpiHandle.Init.NSS = SPI_NSS_SOFT;
	SpiHandle.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_2;
	SpiHandle.Init.FirstBit = SPI_FIRSTBIT_MSB;
	SpiHandle.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
	SpiHandle.Init.Mode = SPI_MODE_MASTER;

	/* enable GPIO TX/RX clock */
	ESC_SPI_SCK_GPIO_CLK_ENABLE();
	ESC_SPI_MISO_GPIO_CLK_ENABLE();
	ESC_SPI_MOSI_GPIO_CLK_ENABLE();

	/* enable SPI clock */
	ESC_SPI_CLK_ENABLE();

	/* SPI SCK Configuration */
	gpio.Pin = ESC_GPIO_PIN_SCK;
	gpio.Mode = GPIO_MODE_AF_PP;
	gpio.Pull = GPIO_PULLDOWN;
	gpio.Speed = GPIO_SPEED_FREQ_HIGH;
	gpio.Alternate = ESC_GPIO_AF_SPI;
	HAL_GPIO_Init(ESC_GPIO_CTRL, &gpio);

	/* SPI MISO Configuration */
	gpio.Pin = ESC_GPIO_PIN_MISO;
	gpio.Alternate = ESC_GPIO_AF_SPI;
	HAL_GPIO_Init(ESC_GPIO_CTRL, &gpio);

	/* SPI MOSI Configuration */
	gpio.Pin = ESC_GPIO_PIN_MOSI;
	gpio.Alternate = ESC_GPIO_AF_SPI;
	HAL_GPIO_Init(ESC_GPIO_CTRL, &gpio);

	/* CS */
	gpio.Pin = ESC_GPIO_PIN_CS;
	gpio.Mode = GPIO_MODE_OUTPUT_PP;
	gpio.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(ESC_GPIO_CS, &gpio);

	/* initialize SPI */
	HAL_SPI_Init(&SpiHandle);
}

void spi_deinit(void)
{
	/* release peripherals */
	ESC_SPI_FORCE_RESET();
	ESC_SPI_RELEASE_RESET();

	/* release GPIO */
	HAL_GPIO_DeInit(ESC_GPIO_CTRL, ESC_GPIO_PIN_SCK);
	HAL_GPIO_DeInit(ESC_GPIO_CTRL, ESC_GPIO_PIN_MISO);
	HAL_GPIO_DeInit(ESC_GPIO_CTRL, ESC_GPIO_PIN_MOSI);
}

void spi_select(int8_t board)
{
	HAL_GPIO_WritePin(ESC_GPIO_CS, ESC_GPIO_PIN_CS, GPIO_PIN_RESET);
}

void spi_unselect(int8_t board)
{
	HAL_GPIO_WritePin(ESC_GPIO_CS, ESC_GPIO_PIN_CS, GPIO_PIN_SET);
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
		result[i] = spi_transfer(0xFF);
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
	HAL_SPI_TransmitReceive(&SpiHandle, &byte, &byte, 1, 0);

#else

	/* write data to tx-buffer */
	SPI_ESC->DR = byte;

	/* wait until data is transmitted */
	//while ((SPI_ESC->SR & SPI_SR_TXE) == RESET);

	/* wait until rx-buffer is not empty */
	while ((SPI_ESC->SR & SPI_SR_RXNE) == RESET);

	/* read data from the rx-buffer */
	byte = SPI_ESC->DR;

#endif

	return byte;
}
