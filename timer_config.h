/*
 * File:   timer_config.h
 * Author: mo
 *
 * Created on 12 ?????, 2020, 09:47 ?
 */

#ifndef TIMER_CONFIG_H
#define	TIMER_CONFIG_H
/*INCLUDES**/
#include "std_types.h"
#include "registers.h"
#include "error.h"
void timer0_interrupt_ovfRoutine(void);
/************************************************************************/
/*			  Structures Definitions		                            */
/************************************************************************/

typedef struct Timer_cfg_s
{
	uint8_t Timer_CH_NO;/*TIMER_CH0 0 or TIMER_CH1 1 or TIMER_CH2 2*/
	uint8_t Timer_Mode;/*Timer mode 0, COUNTER_RISING_MODE 1 COUNTER_FALLING_MODE 2*/
	uint8_t Timer_Polling_Or_Interrupt;/*TIMER_POLLING_MODE 0,TIMER_INTERRUPT_MODE 1*/
	uint8_t Timer_Prescaler;/*No 0,8 1 ,16 2,32 3,64 4,128 5,256 6,1024 7*/
	void (*Timer_Cbk_ptr)(void);/*call back for TIMER_INTERRUPT_MODE*/
}Timer_cfg_s;

/************************************************************************/
/*				 DEFINES			        */
/************************************************************************/
#define TIMER_CH0 0
#define TIMER_CH1 1
#define TIMER_CH2 2
#define TIMER_MODE 0
#define COUNTER_MODE 1
/*********************************************************/
/********TIMER_CH0_MODE*******Timer_Prescaler******************/
/********************************************************/
#define		TIMER0_PRESCALER_2_TIMER_MODE				0xC0
#define		TIMER0_PRESCALER_4_TIMER_MODE				0xC1
#define		TIMER0_PRESCALER_8_TIMER_MODE				0xC2
#define		TIMER0_PRESCALER_16_TIMER_MODE			0xC3
#define		TIMER0_PRESCALER_32_TIMER_MODE			0xC4
#define		TIMER0_PRESCALER_64_TIMER_MODE			0xC5
#define		TIMER0_PRESCALER_128_TIMER_MODE			0xC6
#define   TIMER0_PRESCALER_256_TIMER_MODE			0xC7

#define		TIMER0_PRESCALER_2_FAL_COUNTER_MODE				0xE8
#define		TIMER0_PRESCALER_4_FAL_COUNTER_MODE				0xE9
#define		TIMER0_PRESCALER_8_FAL_COUNTER_MODE				0xEA
#define		TIMER0_PRESCALER_16_FAL_COUNTER_MODE			0xEB
#define		TIMER0_PRESCALER_32_FAL_COUNTER_MODE			0xEC
#define		TIMER0_PRESCALER_64_FAL_COUNTER_MODE			0xED
#define		TIMER0_PRESCALER_128_FAL_COUNTER_MODE			0xEE
#define   TIMER0_PRESCALER_256_FAL_COUNTER_MODE			0xEF

#define		TIMER0_PRESCALER_2_RIS_COUNTER_MODE				0xE0
#define		TIMER0_PRESCALER_4_RIS_COUNTER_MODE				0xE1
#define		TIMER0_PRESCALER_8_RIS_COUNTER_MODE				0xE2
#define		TIMER0_PRESCALER_16_RIS_COUNTER_MODE			0xE3
#define		TIMER0_PRESCALER_32_RIS_COUNTER_MODE			0xE4
#define		TIMER0_PRESCALER_64_RIS_COUNTER_MODE			0xE5
#define		TIMER0_PRESCALER_128_RIS_COUNTER_MODE			0xE6
#define   TIMER0_PRESCALER_256_RIS_COUNTER_MODE			0xE7

#define		TIMER0_PRESCALER_2				0xF0
#define		TIMER0_PRESCALER_4				0xF1
#define		TIMER0_PRESCALER_8				0xF2
#define		TIMER0_PRESCALER_16				0xF3
#define		TIMER0_PRESCALER_32				0xF4
#define		TIMER0_PRESCALER_64				0xF5
#define		TIMER0_PRESCALER_128			0xF6
#define   TIMER0_PRESCALER_256			0xF7


#define TIMER0_INTERRUPT_MODE 		0xA0
#define GLOBAL_INT_EN							0x80
#define TIMER0_POOLING_MODE 			0xDF
/********************************************************/
/********Extern Configuration Structure******************/
/********************************************************/
extern Timer_cfg_s Timer_Configuration0;
extern Timer_cfg_s Timer_Configuration2;
extern Timer_cfg_s Timer_Configuration1;
extern Timer_cfg_s Timer_Deinit_Configuration0;
extern Timer_cfg_s Timer_Deinit_Configuration1;
extern Timer_cfg_s Timer_Deinit_Configuration2;

#endif /* TIMERSCONFIG_H_ */
