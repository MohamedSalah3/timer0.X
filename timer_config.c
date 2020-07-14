#include "timer_config.h"

Timer_cfg_s Timer_Configuration0 =
{
TIMER_CH0,
TIMER0_PRESCALER_256_TIMER_MODE,
TIMER0_INTERRUPT_MODE,
0,
timer0_interrupt_ovfRoutine};
Timer_cfg_s Timer_Configuration1;
Timer_cfg_s Timer_Configuration2;
Timer_cfg_s Timer_Deinit_Configuration0;
Timer_cfg_s Timer_Deinit_Configuration1;
Timer_cfg_s Timer_Deinit_Configuration2;
