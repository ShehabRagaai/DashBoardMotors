#include"STD_TYPES.h"
#include"DIO_interface.h"
#include"KEYPAD_interface.h"
#include"CLCD_interface.h"
#include"PORT_interface.h"
#include"SSD_interface.h"
#include<util/delay.h>
#include"DM_interface.h"
#include"SWITCH_interface.h"

void main(void)
{
	/*u8 Local_u8resiveValue1;
	u8 Local_u8resiveValue2;
	u8 Local_u8Flag;

	PORT_voidInit();
	CLCD_voidInit();
	while(1)
	{

		_delay_ms(100);

		SW_u8GetState(DIO_u8PORTD,DIO_u8PIN7,SW_u8PullUp,&Local_u8resiveValue1);
		SW_u8GetState(DIO_u8PORTD,DIO_u8PIN6,SW_u8PullUp,&Local_u8resiveValue2);
		if(Local_u8resiveValue1==SW_Pressed)
		{

			DC_voidClockWise();
			Local_u8Flag=1;

		}
		else if(Local_u8resiveValue2==SW_Pressed)
		{

			DC_voidCounterClockWise();
			Local_u8Flag=0;
		}

		CLCD_voidCommand(0b00000001);
		if(Local_u8Flag==1)
		{

			CLCD_voidSendString("Clock Wise");
		}
		else if(Local_u8Flag==0)
		{

			CLCD_voidSendString("Counter Clock");
			CLCD_GoTOXY(1,0);
			CLCD_voidSendString("Wise");
		}*/


	/*set diraction of LCD pins*/
		PORT_voidInit();
	/*Intialation of LCD*/
		CLCD_voidInit();
	u32 Local_u8Counter;
	PORT_voidInit();
for(Local_u8Counter=0;Local_u8Counter<258;Local_u8Counter++)


	{

		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN0,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN1,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN2,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN3,DIO_u8PIN_LOW);
		_delay_ms(10);



		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN0,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN1,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN2,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN3,DIO_u8PIN_LOW);


		_delay_ms(10);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN0,DIO_u8PIN_LOW);

		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN1,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN2,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN3,DIO_u8PIN_LOW);

		_delay_ms(10);



		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN0,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN1,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN2,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN3,DIO_u8PIN_HIGH);
		_delay_ms(10);


	}



while(1)
{

}

}











