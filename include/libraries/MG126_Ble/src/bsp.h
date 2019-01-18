#ifndef __BSP_H
#define __BSP_H
#include "arduino.h"
#include "spi_wrapper.h"
#include "mg_api.h"

#ifdef __cplusplus

extern "C"{

#endif

void BSP_Init(int cs_pin, int irq_pin);
void SPI_init();
unsigned char SPI_WriteRead(unsigned char SendData,unsigned char WriteFlag);
unsigned GetIRQSta(void);
void EnableLED(char Enable);
void SetLEDLum(int r, int g, int b, int L/*101 means not used*/);//[0~255]
void SetLEDLumPercent(int percent);

void SetBaudRate(unsigned long bps);

//CS=0
//#define SPI_CS_Enable	GPIO_ResetBits(GPIOA, GPIO_Pin_4)
//CS=1
//#define SPI_CS_Disable	GPIO_SetBits(GPIOA, GPIO_Pin_4)

void LED_ONOFF(unsigned char OnOff);//for ui use

#ifdef __cplusplus

};

#endif
#endif //__BSP_H
