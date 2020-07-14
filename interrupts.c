#include "interrupts.h"
ptr_to_Fun TIMER0OVF_INT;

#pragma interrupt check_my_isr
void check_my_isr(void)
{
  if (READBIT(INTCON,TMR0IF) )
  {
  /*If timer 0 overflows excute Timer0 isr*/
  TIMER0OVF_INT();
  CLEAR_BIT(INTCON,TMR0IF);
  }
}





#pragma code hi_priority_int=0x0008
void hi_priority_int(void)
{
check_my_isr();
}
#pragma code
