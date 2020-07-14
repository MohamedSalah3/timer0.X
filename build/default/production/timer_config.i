# 1 "timer_config.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files (x86)/Microchip/MPLABX/v5.40/packs/Microchip/PIC16Fxxx_DFP/1.2.33/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "timer_config.c" 2
# 1 "./timer_config.h" 1
# 11 "./timer_config.h"
# 1 "./std_types.h" 1
# 16 "./std_types.h"
typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char sint8_t;
typedef signed int sint16_t;
typedef signed long int sint32_t;
typedef signed long long sint64_t;
typedef volatile uint8_t* const reg_type8_t;
typedef volatile uint16_t* const reg_type16_t;
# 11 "./timer_config.h" 2

# 1 "./registers.h" 1
# 12 "./timer_config.h" 2

# 1 "./error.h" 1
# 12 "./error.h"
typedef uint8_t ERROR_STATUS;
# 13 "./timer_config.h" 2

void timer0_interrupt_ovfRoutine(void);




typedef struct Timer_cfg_s
{
 uint8_t Timer_CH_NO;
 uint8_t Timer_Mode;
 uint8_t Timer_Polling_Or_Interrupt;
 uint8_t Timer_Prescaler;
 void (*Timer_Cbk_ptr)(void);
}Timer_cfg_s;
# 74 "./timer_config.h"
extern Timer_cfg_s Timer_Configuration0;
extern Timer_cfg_s Timer_Configuration2;
extern Timer_cfg_s Timer_Configuration1;
extern Timer_cfg_s Timer_Deinit_Configuration0;
extern Timer_cfg_s Timer_Deinit_Configuration1;
extern Timer_cfg_s Timer_Deinit_Configuration2;
# 1 "timer_config.c" 2


Timer_cfg_s Timer_Configuration0 =
{
0,
0xC7,
0xA0,
0,
timer0_interrupt_ovfRoutine};
Timer_cfg_s Timer_Configuration1;
Timer_cfg_s Timer_Configuration2;
Timer_cfg_s Timer_Deinit_Configuration0;
Timer_cfg_s Timer_Deinit_Configuration1;
Timer_cfg_s Timer_Deinit_Configuration2;
