/*
 * usart.h
 *
 *  Created on: 23-02-2015
 *      Author: Jarek
 */

#ifndef USART_H_
#define USART_H_

#include "string.h"

void USARTInit();
void USARTSendNow(char *s);
void USARTSendFrame(uint8_t *frame, uint16_t size);


char xPrintBuffer[256];
#define xprintf(...) do { sprintf(xPrintBuffer, ##__VA_ARGS__); USARTSendNow(xPrintBuffer); } while (0)
#define xprintfn(...) do { sprintf(xPrintBuffer, ##__VA_ARGS__); sprintf(xPrintBuffer + strlen(xPrintBuffer), "\n\r"); USARTSendNow(xPrintBuffer); } while (0)


#endif /* USART_H_ */
