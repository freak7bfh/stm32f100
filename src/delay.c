/*

 * delay.c
 *
 *  Created on: 23-02-2015
 *      Author: Jarek
 */

#include "stm32f10x_conf.h"
#include "delay.h"

void DelayInit() {

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);

	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
	TIM_TimeBaseStructInit(&TIM_TimeBaseStructure);

	TIM_TimeBaseStructure.TIM_ClockDivision	= 0;
	TIM_TimeBaseStructure.TIM_CounterMode	= TIM_CounterMode_Up;
	TIM_TimeBaseStructure.TIM_Period		= 0xffff;
	TIM_TimeBaseStructure.TIM_Prescaler		= SYS_CLOCK-1;

	TIM_TimeBaseInit(TIM4, &TIM_TimeBaseStructure);

	TIM_Cmd(TIM4, ENABLE);

//	USARTSendNow("DelayInit...\n\r");
}


void Delay_us(uint16_t us) {
	TIM4->CNT = 0;
	while((uint16_t)(TIM4->CNT) <= us);
}

void Delay_ms(uint16_t ms) {
	int i;
	for (i=0; i < ms; i++){
		Delay_us(1000);
	}
}
