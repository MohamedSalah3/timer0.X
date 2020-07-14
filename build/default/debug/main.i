# 1 "main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files (x86)/Microchip/MPLABX/v5.40/packs/Microchip/PIC16Fxxx_DFP/1.2.33/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "main.c" 2
# 10 "main.c"
# 1 "./DIO.h" 1



# 1 "./DIO_Config.h" 1
# 10 "./DIO_Config.h"
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
# 10 "./DIO_Config.h" 2

# 1 "./error.h" 1
# 12 "./error.h"
typedef uint8_t ERROR_STATUS;
# 11 "./DIO_Config.h" 2
# 56 "./DIO_Config.h"
typedef struct DIO_Cfg_s{
    uint8_t port;
    uint8_t dir;
    uint8_t pin;
    uint8_t operation_mode;

}DIO_Cfg_s;


extern DIO_Cfg_s Dio_configutation_A;
extern DIO_Cfg_s Dio_configutation_B;
extern DIO_Cfg_s Dio_configutation_C;
extern DIO_Cfg_s Dio_configutation_D;
extern DIO_Cfg_s Dio_configutation_E;
# 4 "./DIO.h" 2
# 13 "./DIO.h"
ERROR_STATUS DIO_init (DIO_Cfg_s *DIO_info);
# 42 "./DIO.h"
ERROR_STATUS DIO_Write (uint8_t GPIO, uint8_t pins, uint8_t value);
# 70 "./DIO.h"
ERROR_STATUS DIO_Read (uint8_t GPIO,uint8_t pins, uint8_t *data);
# 95 "./DIO.h"
ERROR_STATUS DIO_Toggle (uint8_t GPIO, uint8_t pins);
# 10 "main.c" 2

# 1 "./timer.h" 1
# 11 "./timer.h"
# 1 "./interrupts.h" 1
# 12 "./interrupts.h"
typedef void (*ptr_to_Fun)(void);
extern ptr_to_Fun TIMER0OVF_INT;
# 11 "./timer.h" 2

# 1 "./timer_config.h" 1
# 14 "./timer_config.h"
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
# 11 "main.c" 2

uint8_t ret,data=0,data2=0;
void main(void)
{
    ret=Timer_Init(&Timer_Configuration0);
   ret= DIO_init (&Dio_configutation_B);
   ret= DIO_init (&Dio_configutation_C);
   ret= DIO_init (&Dio_configutation_A);

   while (1)
    {

    ret=DIO_Read (2,0x10, &data);
    ret=DIO_Read (0,0x20, &data2);
    if ((data == 1) &&(data2 == 1)) {
    ret = DIO_Write (1,0x04|0x08,0xFF);
    }else{
      ret = DIO_Write (1,0x04|0x08,0);
    }

    }

}
