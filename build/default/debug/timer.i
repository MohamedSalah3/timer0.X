# 1 "timer.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files (x86)/Microchip/MPLABX/v5.40/packs/Microchip/PIC16Fxxx_DFP/1.2.33/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "timer.c" 2
# 1 "./timer.h" 1
# 11 "./timer.h"
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
# 11 "./timer.h" 2

# 1 "./timer_config.h" 1
# 13 "./timer_config.h"
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
# 12 "./timer.h" 2
# 24 "./timer.h"
ERROR_STATUS Timer_Init(Timer_cfg_s* Timer_cfg);
# 36 "./timer.h"
ERROR_STATUS Timer_Start(uint8_t Timer_CH_NO, uint16_t Timer_Count);
# 47 "./timer.h"
ERROR_STATUS Timer_Stop(uint8_t Timer_CH_NO);
# 59 "./timer.h"
ERROR_STATUS Timer_GetStatus(uint8_t Timer_CH_NO, uint8_t* Data);
# 71 "./timer.h"
ERROR_STATUS Timer_GetValue(uint8_t Timer_CH_NO, uint16_t* Data);
# 1 "timer.c" 2
# 13 "timer.c"
ERROR_STATUS Timer_Init(Timer_cfg_s* Timer_cfg)
{
uint8_t ret_error = 0;

switch (Timer_cfg->Timer_CH_NO)
{
  case 0:
    *((reg_type8_t)(0x0081)) &= (Timer_cfg -> Timer_Mode);
        switch (Timer_cfg->Timer_Polling_Or_Interrupt)
        {
            case 0x20:
            *((reg_type8_t)(0x000B)) |=0x20;
            *((reg_type8_t)(0x000B)) |= 0x80;
            TIMER0OVF_INT = ( Timer_cfg -> Timer_Cbk_ptr);
            break;
            case 0xDF:
            *((reg_type8_t)(0x000B)) &= 0xDF;
            break;
            default:
            ret_error += 1 +24;

        }
  break;
  case 1:
    switch (Timer_cfg->Timer_Mode)
    {
      case 0:
        switch (Timer_cfg->Timer_Polling_Or_Interrupt)
          {
            case 0x20:

            break;
            case 0xDF:

            break;

          }
      break;
      case 1:
        switch (Timer_cfg->Timer_Polling_Or_Interrupt)
          {
            case 0x20:

            break;
            case 0xDF:

            break;

          }
      break;
      default:

      break;
    }

  break;
  case 2:
    switch (Timer_cfg->Timer_Mode)
    {
      case 0:
        switch (Timer_cfg->Timer_Polling_Or_Interrupt)
          {
            case 0x20:

            break;
            case 0xDF:

            break;

          }
      break;
      case 1:
        switch (Timer_cfg->Timer_Polling_Or_Interrupt)
          {
            case 0x20:

            break;
            case 0xDF:

            break;

          }
      break;
      default:

      break;
  }
  break;
  default:

  break;
}



return ret_error;
}


void timer0_interrupt_ovfRoutine(void)
{


}
# 127 "timer.c"
ERROR_STATUS Timer_Start(uint8_t Timer_CH_NO, uint16_t Timer_Count)
{
  uint8_t ret_error = 0;


  return ret_error;
}
# 144 "timer.c"
ERROR_STATUS Timer_Stop(uint8_t Timer_CH_NO)
{
  uint8_t ret_error = 0;


  return ret_error;
}
# 161 "timer.c"
ERROR_STATUS Timer_GetStatus(uint8_t Timer_CH_NO, uint8_t* Data)
{
  uint8_t ret_error = 0;


  return ret_error;
}
# 178 "timer.c"
ERROR_STATUS Timer_GetValue(uint8_t Timer_CH_NO, uint16_t* Data)
{
  uint8_t ret_error = 0;

  return ret_error;
}
