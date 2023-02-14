/********************************************************************************/
/********************************************************************************/
 /*****************       Aathur:Shehab Ahmed Ragaai          ********************/
/*****************       Layer:HAL                           ********************/
/*****************       SWC:SWITCH                             ********************/
/*****************       version:1.00                        ********************/
/********************************************************************************/
/********************************************************************************/
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"DIO_interface.h"
#include"SWITCH_interface.h"





u8 SW_u8GetState(u8 copy_u8Port,u8 copy_u8Pin,u8 copy_u8PullType,u8*copy_pu8Return)
{
	u8 Local_u8ErrorState=0;


	if((copy_u8Port<=DIO_u8PORTD)&&(copy_u8Pin<=DIO_u8PIN7))
	{
		
		DIO_u8SetPinValue(copy_u8Port,copy_u8Pin,DIO_u8PIN_HIGH);
		if(copy_u8PullType==SW_u8PullUp)
		{

			DIO_u8GetPinValue(copy_u8Port,copy_u8Pin,copy_pu8Return);

		}

		else if(copy_u8PullType==SW_u8PullDown)
		{
			DIO_u8GetPinValue(copy_u8Port,copy_u8Pin,copy_pu8Return);
			*copy_pu8Return=TOGGLE_BIT(*copy_pu8Return,0);
		}
		else
		{
			Local_u8ErrorState=1;
		}
	}
	else
	{
		Local_u8ErrorState=1;
	}

	return Local_u8ErrorState;
}
