/*
 * File:   interrupts.h
 * Author: mo
 *
 * Created on 13 ?????, 2020, 06:44 ?
 */

#ifndef INTERRUPTS_H
#define	INTERRUPTS_H
#include "registers.h"
#include "std_types.h"
typedef void (*ptr_to_Fun)(void);
extern ptr_to_Fun TIMER0OVF_INT;





#endif	/* INTERRUPTS_H */
