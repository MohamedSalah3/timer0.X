#include "timer.h"
#include "DIO.h"
/************************************************************************/
/*		         TIMER FUNCTIONS Bodies	        */
/************************************************************************/
/**
 * Input: Pointer to a structure contains the information needed to initialize the timer.
 * Output:
 * In/Out:
 * Return: The error status of the function.
 * Description: Initiates the module.
 *
 */
 static Prescaler = OUTPUT;
ERROR_STATUS Timer_Init(Timer_cfg_s* Timer_cfg)
{
uint8_t ret_error = E_OK;

switch (Timer_cfg->Timer_CH_NO)
{
  case TIMER_CH0:
    Prescaler &= (Timer_cfg -> Timer_Mode);
        switch (Timer_cfg->Timer_Polling_Or_Interrupt)
        {
            case TIMER0_INTERRUPT_MODE:
            INTCON |= GLOBAL_INT_EN;
            INTCON |=TIMER0_INTERRUPT_MODE;
            TIMER0OVF_INT = ( Timer_cfg -> Timer_Cbk_ptr);
            break;
            case TIMER0_POOLING_MODE:
            INTCON &= TIMER0_POOLING_MODE;
            break;
            default:
            ret_error += E_NOK+INVALID_INT_POL_MODE;

        }
  break;
  case TIMER_CH1:
    switch (Timer_cfg->Timer_Mode)
    {
      case TIMER_MODE:
        switch (Timer_cfg->Timer_Polling_Or_Interrupt)
          {
            case TIMER0_INTERRUPT_MODE:

            break;
            case TIMER0_POOLING_MODE:

            break;

          }
      break;
      case COUNTER_MODE:
        switch (Timer_cfg->Timer_Polling_Or_Interrupt)
          {
            case TIMER0_INTERRUPT_MODE:

            break;
            case TIMER0_POOLING_MODE:

            break;

          }
      break;
      default:

      break;
    }

  break;
  case TIMER_CH2:
    switch (Timer_cfg->Timer_Mode)
    {
      case TIMER_MODE:
        switch (Timer_cfg->Timer_Polling_Or_Interrupt)
          {
            case TIMER0_INTERRUPT_MODE:

            break;
            case TIMER0_POOLING_MODE:

            break;

          }
      break;
      case COUNTER_MODE:
        switch (Timer_cfg->Timer_Polling_Or_Interrupt)
          {
            case TIMER0_INTERRUPT_MODE:

            break;
            case TIMER0_POOLING_MODE:

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
  DIO_Write (GPIOB,PIN2|PIN3,LOW);

}
/**
 * Input:
 * 	Timer_CH_NO: The channel number of the timer needed to be started.
 *	Timer_Count: The start value of the timer.
 * Output:
 * In/Out:
 * Return: The error status of the function.
 * Description: This function strats the needed timer.
 *
 */
ERROR_STATUS Timer_Start(uint8_t Timer_CH_NO, uint16_t Timer_Count)
{
  uint8_t ret_error = E_OK;
  switch (Timer_CH_NO) {
    case TIMER_CH0:
    /*assign Prescaler*/
    /*Assign count*/
    OPTION_REG = Prescaler;
    if (Timer_Count <= 255) {
    TIMER0 =Timer_Count;
  }else if()
  {
/*if bigger than 255 calculate the required ovfs to accomplish that */
/*if pooling make a counter to count the number of overflows*/
/*if interrupt use the same counter used when pooling to count the number of overflows*/

  }

    break;

    case TIMER_CH1:
    /*assign Prescaler*/
    /*Assign count*/
    break;

    case TIMER_CH2:
    /*assign Prescaler*/
    /*Assign count*/
    break;
    default:
    ret_error += E_NOK+INVALID_TIMER_CHANNEL;
    break;
  }


  return ret_error;
}

/**
 * Input:
 * 	Timer_CH_NO: The channel number of the timer needed to be stopped.
 * Output:
 * In/Out:
 * Return: The error status of the function.
 * Description: This function stops the needed timer.
 *
 */
ERROR_STATUS Timer_Stop(uint8_t Timer_CH_NO)
{
  uint8_t ret_error = E_OK;

  return ret_error;
}
/**
 * Input:
 * 	Timer_CH_NO: The channel number of the timer needed to get its status.
 * Output:
 * 	Data: A variable of type bool returns if the flag of the timer is raised or not.
 * In/Out:
 * Return: The error status of the function.
 * Description: This function is used to return if the flag of the timer is raised or not.
 *
 */
ERROR_STATUS Timer_GetStatus(uint8_t Timer_CH_NO, uint8_t* Data)
{
  uint8_t ret_error = E_OK;
  switch (Timer_CH_NO) {
    case TIMER_CH0:
*Data = READBIT(INTCON,TMR0IF);
    break;

    case TIMER_CH1:

    break;

    case TIMER_CH2:


    break;
    default:
    ret_error += E_NOK+INVALID_TIMER_CHANNEL;
    break;
  }



  return ret_error;
}
/**
 * Input:
 * 	Timer_CH_NO: The channel number of the timer needed to get its value.
 * Output:
 * 	Data: This is the output variable of the function which holds the value of the timer.
 * In/Out:
 * Return: The error status of the function.
 * Description: This function is used to return the value of the timer.
 *
 */
ERROR_STATUS Timer_GetValue(uint8_t Timer_CH_NO, uint16_t* Data)
{
  uint8_t ret_error = E_OK;
  switch (Timer_CH_NO) {
    case TIMER_CH0:
    /**timer0 count*/
    *Data = TIMER0;
    break;

    case TIMER_CH1:
     /**timer0 count*/
    break;

    case TIMER_CH2:
    /**timer0 count*/
    break;
    default:
    ret_error += E_NOK+INVALID_TIMER_CHANNEL;
    break;
  }

  return ret_error;
}
