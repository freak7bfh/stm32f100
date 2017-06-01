/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f10x.h"
#include "stm32f10x_it.h"
#include "main.h"
#include "rcc.h"
#include "usart.h"
#include "delay.h"
#include "stdio.h"


uint16_t systick_counter=0;


int main(){

	RCCInit();
	SysTick_Config(SYS_FREQ/1000);

	DelayInit();
	USARTInit();
	function(); // mala zmiana :D


	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;

	GPIO_InitStruct.GPIO_Pin	= GPIO_Pin_9|GPIO_Pin_8;
	GPIO_InitStruct.GPIO_Mode	= GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed	= GPIO_Speed_2MHz;
	GPIO_Init(GPIOC,&GPIO_InitStruct);

	GPIO_SetBits(GPIOC,GPIO_Pin_9);

	uint16_t counter=0x0000;
	char StrToSend[128];

	while(1){

		if(systick_counter==501){
			sprintf(StrToSend,"-- test frame -- frame number: 0x%04X\r\n",counter++);
			USARTSendNow(StrToSend);
		}
/*
		GPIO_SetBits(GPIOC, GPIO_Pin_9);
		Delay_ms(25);
		GPIO_ResetBits(GPIOC,GPIO_Pin_9);
		Delay_ms(975);
*/



	}
	return 0;

}

void SysTick_Handler(){
	if(++systick_counter==1000)
		systick_counter=0;

	if(systick_counter==0) GPIOC->BSRR=GPIO_Pin_9;

	if(systick_counter==50)	GPIOC->BRR=GPIO_Pin_9;

	if(systick_counter==500) GPIOC->ODR^=GPIO_Pin_8;

}

