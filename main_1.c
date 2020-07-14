/*
 * File:   main.c
 * Author: mo
 *
 * Created on 09 ?????, 2020, 10:24 ?
 */


#include <xc.h>
#include "DIO.h"

uint8_t ret,data=0,data2=0;
void main(void)
{
   ret= DIO_init (&Dio_configutation_B);
   ret= DIO_init (&Dio_configutation_C);
   ret= DIO_init (&Dio_configutation_A);

   while (1)
    {

    ret=DIO_Read (GPIOC,PIN4, &data);
    ret=DIO_Read (GPIOA,PIN5, &data2);
    if ((data == 1) &&(data2 == 1)) {
    ret = DIO_Write (GPIOB,PIN2|PIN3,HIGH);
    }else{
      ret = DIO_Write (GPIOB,PIN2|PIN3,LOW);
    }

    }

}
