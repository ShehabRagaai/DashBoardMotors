/********************************************************************************/
/********************************************************************************/
/*****************       Aathur:Shehab Ahmed Ragaai          ********************/
/*****************       Layer:HAL                           ********************/
/*****************       SWC:SSD                             ********************/
/*****************       version:1.00                        ********************/
/********************************************************************************/
/********************************************************************************/
#include"STD_TYPES.h"
#include"DIO_interface.h"
#include"SSD_interface.h"
u8 SSD_u8SetNumber(u8 copy_u8Number,SSD_t*copy_pu8SSD)
{
	u8 Local_u8ErrorState=0;
	u8 SevSegArr[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
	if((copy_pu8SSD->port<=DIO_u8PORTD)&&(copy_pu8SSD->Enable_port<=DIO_u8PORTD)&&(copy_pu8SSD->Enable_pin<=DIO_u8PIN7))
	{
		if (copy_pu8SSD->comm_type==SSD_u8Anode)
		{

			DIO_u8SetPinValue(copy_pu8SSD->Enable_port,copy_pu8SSD->Enable_pin,DIO_u8PIN_HIGH);

			DIO_u8SetPortValue(copy_pu8SSD->port,~SevSegArr[copy_u8Number]);

		}

		else if (copy_pu8SSD->comm_type==SSD_u8Cathode)
		{

			DIO_u8SetPinValue(copy_pu8SSD->Enable_port,copy_pu8SSD->Enable_pin,DIO_u8PIN_LOW);

			DIO_u8SetPortValue(copy_pu8SSD->port,SevSegArr[copy_u8Number]);
		}
		else

			Local_u8ErrorState=1;

	}
	else
	{
		Local_u8ErrorState=1;
	}

	return Local_u8ErrorState;


}
