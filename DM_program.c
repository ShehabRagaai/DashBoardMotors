/********************************************************************************/
/********************************************************************************/
/*****************       Aathur:Shehab Ahmed Ragaai          ********************/
/*****************       Layer:HAL                           ********************/
/*****************       SWC:DC MOTOR                        ********************/
/*****************       version:1.00                        ********************/
/********************************************************************************/
/********************************************************************************/
#include"STD_TYPES.h"
#include"DIO_interface.h"
#include"DM_interface.h"

 void DC_voidClockWise(void)
 {

	 DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN1,DIO_u8PIN_LOW);
	 DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN0,DIO_u8PIN_HIGH);

 }


 void DC_voidCounterClockWise(void)
  {
 	 DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN0,DIO_u8PIN_LOW);
 	 DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN1,DIO_u8PIN_HIGH);
  }
