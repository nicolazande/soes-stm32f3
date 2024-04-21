/****************************************************************
 * Includes
 ****************************************************************/
#include "rst.h"


/****************************************************************
 * Public functions
 ****************************************************************/
void rst_setup(void)
{
    /* data */
	GPIO_InitTypeDef gpio;

	/* enable GPIO clock */
	RCC->AHBENR |= ESC_RCC_APB1PERIPH_GPIO_RSTN; //enable GPIO clock
	gpio.Pin = ESC_GPIO_PIN_RSTN; //setup RSTN
	gpio.Mode = GPIO_MODE_OUTPUT_PP;
	gpio.Speed = GPIO_SPEED_FREQ_HIGH;
	gpio.Pull = GPIO_PULLUP;

	/* setup NRST as GPIO output */
	HAL_GPIO_Init(ESC_GPIO_RSTN, &gpio);

	/* set RSTN line high */
	rst_high();
}

void rst_low(void)
{
    HAL_GPIO_WritePin(ESC_GPIO_RSTN, ESC_GPIO_PIN_RSTN, GPIO_PIN_RESET);
}

void rst_high(void)
{
    HAL_GPIO_WritePin(ESC_GPIO_RSTN, ESC_GPIO_PIN_RSTN, GPIO_PIN_SET);
}

void rst_check_start(void)
{
    /* data */
	GPIO_InitTypeDef gpio;

	/* enable GPIO clock */
	RCC->AHBENR |= ESC_RCC_APB1PERIPH_GPIO_RSTN; //enable GPIO clock

	gpio.Pin = ESC_GPIO_PIN_RSTN; //setup RSTN
	gpio.Mode = GPIO_MODE_INPUT;
	gpio.Speed = GPIO_SPEED_FREQ_HIGH;
	gpio.Pull = GPIO_NOPULL;

	/* setup NRST as GPIO input */
	HAL_GPIO_Init(ESC_GPIO_RSTN, &gpio);
}

uint8_t is_esc_reset(void)
{
	GPIO_PinState state = HAL_GPIO_ReadPin(ESC_GPIO_RSTN, ESC_GPIO_PIN_RSTN);
    return (uint8_t)(state == GPIO_PIN_SET);
}
