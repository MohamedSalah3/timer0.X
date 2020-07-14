/*
 * File:   registers.h
 * Author: mo
 *
 * Created on 09 ?????, 2020, 10:25 ?
 */

#ifndef REGISTERS_H
#define	REGISTERS_H
#include "std_types.h"
/********************************************************************/
#define PORTA_DATA *((reg_type8_t)(0x0005))
#define PORTA_DIR   *((reg_type8_t)(0x0085))
#define PORTA_MODE   *((reg_type8_t)(0x009F))
#define STATUS_REG   *((reg_type8_t)(0x0083))
/********************************************************************/
#define PORTB_DATA *((reg_type8_t)(0x0006))
#define PORTB_DIR   *((reg_type8_t)(0x0086))
/********************************************************************/
#define PORTC_DATA *((reg_type8_t)(0x0007))
#define PORTC_DIR   *((reg_type8_t)(0x0087))
/********************************************************************/
#define PORTD_DATA  *((reg_type8_t)(0x0008))
#define PORTD_DIR   *((reg_type8_t)(0x0088))
/********************************************************************/
#define PORTE_DATA  *((reg_type8_t)(0x0009))
#define PORTE_DIR   *((reg_type8_t)(0x0089))
/********************************************************************/
/*                          TIMER0                                  */
/********************************************************************/
#define OPTION_REG  *((reg_type8_t)(0x0081))
/********************************************************************/
#define GIE  0x80
#define PEIE 0x40
#define TMR0IE 0x20
#define INTE 0x10
#define RBIE 0x08
#define TMR0IF 0x04
#define INTF 0x02
#define RBIF 0x01
#define INTCON      *((reg_type8_t)(0x000B))
/********************************************************************/
#define TIMER0      *((reg_type8_t)(0x0001))
/********************************************************************/


#endif	/* REGISTERS_H */
