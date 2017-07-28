#include <stdlib.h>
#include "stm32f7xx_hal.h"
#include "stm32746g_discovery_sdram.h"
#include "RTE_Components.h"
#include "Board_LED.h"
#include "gfx.h"
#include "gui.h"

#ifdef RTE_CMSIS_RTOS_RTX
extern uint32_t os_time;

uint32_t HAL_GetTick(void) { 
  return os_time; 
}
#endif

static void SystemClock_Config (void)
{
	RCC_ClkInitTypeDef RCC_ClkInitStruct;
	RCC_OscInitTypeDef RCC_OscInitStruct;

	/* Enable HSE Oscillator and activate PLL with HSE as source */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
	RCC_OscInitStruct.HSEState = RCC_HSE_ON;
	RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
	RCC_OscInitStruct.PLL.PLLM = 25;
	RCC_OscInitStruct.PLL.PLLN = 400;  
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 8;
	HAL_RCC_OscConfig(&RCC_OscInitStruct);

	/* Activate the OverDrive to reach the 200 MHz Frequency */
	HAL_PWREx_EnableOverDrive();
  
	/* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2 clocks dividers */
	RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;  
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;  
	HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_6);
}

static void CPU_CACHE_Enable (void)
{
	SCB_EnableICache();
	SCB_EnableDCache();
}

int main (void)
{	
	CPU_CACHE_Enable();			// Enable the CPU Cache
	HAL_Init();					// Initialize the HAL Library
	BSP_SDRAM_Init();			// Initialize BSP SDRAM
	SystemClock_Config();		// Configure the System Clock
	osKernelInitialize();		// Initialize the KEIL RTX operating system
	osKernelStart();			// Start the scheduler
	gfxInit();					// Initialize the uGFX library
	LED_Initialize();           // LED Initialization
	
	gfxInit();

	geventListenerInit(&gl);
	gwinAttachListener(&gl);

	guiCreate();

    while(1) {
		guiEventLoop();
    }
}
