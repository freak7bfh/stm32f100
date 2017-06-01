/*
 * delay.h
 *
 *  Created on: 23-02-2015
 *      Author: Jarek
 */

#ifndef DELAY_H_
#define DELAY_H_

#define SYS_CLOCK 24	// MHz

#include "stm32f10x_conf.h"

void DelayInit();
void Delay_us(uint16_t us);
void Delay_ms(uint16_t ms);

#endif /* DELAY_H_ */
