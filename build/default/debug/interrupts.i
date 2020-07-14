# 1 "interrupts.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files (x86)/Microchip/MPLABX/v5.40/packs/Microchip/PIC16Fxxx_DFP/1.2.33/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "interrupts.c" 2
# 1 "./interrupts.h" 1
# 10 "./interrupts.h"
# 1 "./registers.h" 1
# 10 "./registers.h"
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
# 10 "./registers.h" 2
# 10 "./interrupts.h" 2


typedef void (*ptr_to_Fun)(void);
extern ptr_to_Fun TIMER0OVF_INT;
# 1 "interrupts.c" 2

ptr_to_Fun TIMER0OVF_INT;

#pragma interrupt check_my_isr
void check_my_isr(void)
{
  if (((*((reg_type8_t)(0x000B)) >> 0x04) & 1) )
  {

  TIMER0OVF_INT();
  (*((reg_type8_t)(0x000B)) &=(~(1<<0x04)));
  }
}





#pragma code hi_priority_int=0x0008
void hi_priority_int(void)
{
check_my_isr();
}
#pragma code
# 24 "interrupts.c"

