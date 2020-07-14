/*
 * File:   error.h
 * Author: mo
 *
 * Created on 09 ?????, 2020, 10:41 ?
 */

#ifndef ERROR_H
#define	ERROR_H
#include "std_types.h"

typedef uint8_t ERROR_STATUS;
#define E_OK 0
#define E_NOK 1
/*DIO Expected errors*/
#define MULTIPLE_INIT 10
#define NOT_INIT 12
#define INVALID_PORT 14
#define NULL_PTR  16
#define INVALID_DIR 18
#define INVALID_MODE 20
/*Timer Expected errors*/
#define INVALID_TIMER0_MODE 22
#define INVALID_INT_POL_MODE 24
#define INVALID_TIMER_CHANNEL 26


#endif	/* ERROR_H */
