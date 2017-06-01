/*
 * rcc.c
 *
 *  Created on: 04-03-2015
 *      Author: Jarek
 */
#include "stm32f10x_conf.h"


void RCCInit(){
	 	/* Wyzerowanie poprzednich ustawieñ RCC */
	 	RCC_DeInit();

	 	ErrorStatus HSEStartUpStatus;

	 	/* W³¹czenie HSE */
	 	RCC_HSEConfig(RCC_HSE_ON);

	 	/* Czekaj, a¿ HSE sie uruchomi lub zostanie przekroczony dozwolony czas */
	 	HSEStartUpStatus = RCC_WaitForHSEStartUp();

	 	if (HSEStartUpStatus == SUCCESS){
			/* W³¹czenie opóŸnieñ dla FLASH
			 * FLASH_Latency_0 do 24MHz
			 * FLASH_Latency_1 24..48MHz
			 * FLASH_Latency_2 48..72MHz
			 */
			FLASH_SetLatency(FLASH_Latency_0);

			FLASH_PrefetchBufferCmd(FLASH_PrefetchBuffer_Enable);

			/* HCLK = SYSCLK */
			RCC_HCLKConfig(RCC_SYSCLK_Div1);

			/* PCLK2 = HCLK */
			RCC_PCLK2Config(RCC_HCLK_Div1);

			/* PCLK1 = HCLK/2 */
			RCC_PCLK1Config(RCC_HCLK_Div2);

			/* PLLCLK = 8MHz * 3 = 24 MHz */
			RCC_PLLConfig(RCC_PLLSource_PREDIV1, RCC_PLLMul_3);

			/* W³¹czenie PLL */
			RCC_PLLCmd(ENABLE);

			/* Oczekiwanie na gotowoœæ PLL */
			while (RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET);

			/* Wybór PLL na zegar systemowy */
			RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK);

			/* Oczekiwanie na wybór zegara systemowego */
			while (RCC_GetSYSCLKSource() != 0x08);
		}
}
