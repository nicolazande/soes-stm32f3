/****************************************************************
 * Includes
 ****************************************************************/
#include "main.h"
#include "esc.h"
#include "ecat_slv.h"
#include "utypes.h"


/****************************************************************
 * Data
 ****************************************************************/
/* CANopen Object Dictionary */
_Objects Obj;

/* SOES configuration */
static esc_cfg_t config =
{
    .user_arg = "/dev/lan9252",
    .use_interrupt = 0,
    .watchdog_cnt = 500,
    .set_defaults_hook = NULL,
    .pre_state_change_hook = NULL,
    .post_state_change_hook = NULL,
    .application_hook = NULL,
    .safeoutput_override = NULL,
    .pre_object_download_hook = NULL,
    .post_object_download_hook = NULL,
    .rxpdo_override = NULL,
    .txpdo_override = NULL,
    .esc_hw_interrupt_enable = NULL,
    .esc_hw_interrupt_disable = NULL,
    .esc_hw_eep_handler = NULL,
    .esc_check_dc_handler = NULL,
};


/****************************************************************
 * Private function prototypes
 ****************************************************************/
/** system clock configuration */
void SystemClock_Config(void);

/** GPIO initialization function */
static void MX_GPIO_Init(void);

/** This function is executed in case of error occurrence */
void Error_Handler(void);

/* read inputs */
void cb_get_inputs();

/* set outputs */
void cb_set_outputs();

/* set failure */
void assert_failed(uint8_t *file, uint32_t line);


/****************************************************************
 * Private function
 ****************************************************************/
void SystemClock_Config(void)
{
	RCC_OscInitTypeDef RCC_OscInitStruct = {0};
	RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

	/**
	 * Initializes the RCC Oscillators according to the specified parameters
	 * in the RCC_OscInitTypeDef structure.
	 */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
	{
		Error_Handler();
	}

	/* Initializes the CPU, AHB and APB buses clocks */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
								|RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
	{
		Error_Handler();
	}
}

static void MX_GPIO_Init(void)
{
	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOA_CLK_ENABLE();
}

void Error_Handler(void)
{
	/* disable implementation to report the HAL error return state */
	__disable_irq();
	while (1){}
}

void cb_get_inputs(){}

void cb_set_outputs(){}

#ifdef  USE_FULL_ASSERT
/**
 * Reports the name of the source file and the source line number
 * where the assert_param error has occurred.
 */
void assert_failed(uint8_t *file, uint32_t line)
{
}
#endif /* USE_FULL_ASSERT */


/****************************************************************
 * Application
 ****************************************************************/
int main(void)
{
	/**
	 * Reset of all peripherals, initializes the Flash interface
	 * and the SysTick.
	 */
	HAL_Init();

	/* configure the system clock */
	SystemClock_Config();

	/* Initialize all configured peripherals */
	MX_GPIO_Init();

	/* initialize EtherCAT slave */
	ecat_slv_init(&config);

	while (1)
	{
		/* run slave login (polling mode) */
		ecat_slv();
	}
}
