#include "STD_TYPES.h"
#include"BIT_MATH.h"
//#include"DIO_config.h"
#include"DIO_interface.h"
//#include"DIO_private.h"
#include"DIO_register.h"


u8 DIO_u8SetPinDirection(u8 copy_u8PORT,u8 copy_u8PIN,u8 copy_u8DIRECTION)
{
	u8 Local_u8ERRORState = OK;
	if((copy_u8PIN > DIO_u8_PIN7) || (copy_u8DIRECTION > DIO_u8_PIN_OUTPUT ))
	{
		Local_u8ERRORState  = NOK;
	}
	else
	{
		if(copy_u8DIRECTION == DIO_u8_PIN_INPUT )
			switch(copy_u8PORT)
			{
			case DIO_u8_PORTA : CLR_BIT(DDRA,copy_u8PIN);break;
			case DIO_u8_PORTB : CLR_BIT(DDRB,copy_u8PIN);break;
			case DIO_u8_PORTC : CLR_BIT(DDRC,copy_u8PIN);break;
			case DIO_u8_PORTD : CLR_BIT(DDRD,copy_u8PIN);break;
			default: Local_u8ERRORState =NOK;break;
			}

		if(copy_u8DIRECTION == DIO_u8_PIN_OUTPUT )
			switch(copy_u8PORT)
			{
			case DIO_u8_PORTA : SET_BIT(DDRA,copy_u8PIN);break;
			case DIO_u8_PORTB : SET_BIT(DDRB,copy_u8PIN);break;
			case DIO_u8_PORTC : SET_BIT(DDRC,copy_u8PIN);break;
			case DIO_u8_PORTD : SET_BIT(DDRD,copy_u8PIN);break;
			default: Local_u8ERRORState=NOK;break;
			}
		else
		{
			Local_u8ERRORState=NOK;
		}
	}

	return Local_u8ERRORState;
}
u8 DIO_u8SetPortDirection(u8 copy_u8PORT,u8 copy_u8DIRECTION)
{
	u8 Local_u8ERRORState = OK;
	if( copy_u8DIRECTION > DIO_u8_PORT_OUTPUT )
	{
		Local_u8ERRORState  = NOK;
	}
	else
	{
		switch(copy_u8PORT)
		{
		case DIO_u8_PORTA :DDRA = copy_u8DIRECTION;break;
		case DIO_u8_PORTB :DDRB = copy_u8DIRECTION;break;
		case DIO_u8_PORTC :DDRC = copy_u8DIRECTION;break;
		case DIO_u8_PORTD :DDRD = copy_u8DIRECTION;break;
		default: Local_u8ERRORState =NOK;break;
		}
	}

	return Local_u8ERRORState;
}

u8 DIO_u8SetPinValue(u8 copy_u8PORT,u8 copy_u8PIN,u8 copy_u8VALUE)
{
	u8 Local_u8ERRORState=OK;
	if((copy_u8PIN > DIO_u8_PIN7) ||( copy_u8VALUE > DIO_u8_PIN_HIGH) )
	{
		Local_u8ERRORState  = NOK;
	}
	else
	{
		if(copy_u8VALUE == DIO_u8_PIN_LOW )
			switch(copy_u8PORT)
			{
			case DIO_u8_PORTA : CLR_BIT(PORTA,copy_u8PIN);break;
			case DIO_u8_PORTB : CLR_BIT(PORTB,copy_u8PIN);break;
			case DIO_u8_PORTC : CLR_BIT(PORTC,copy_u8PIN);break;
			case DIO_u8_PORTD : CLR_BIT(PORTD,copy_u8PIN);break;
			default: Local_u8ERRORState =NOK;break;
			}

		else if(copy_u8VALUE  == DIO_u8_PIN_HIGH )
			switch(copy_u8PORT)
			{
			case DIO_u8_PORTA : SET_BIT(PORTA,copy_u8PIN);break;
			case DIO_u8_PORTB : SET_BIT(PORTB,copy_u8PIN);break;
			case DIO_u8_PORTC : SET_BIT(PORTC,copy_u8PIN);break;
			case DIO_u8_PORTD : SET_BIT(PORTD,copy_u8PIN);break;
			default: Local_u8ERRORState=NOK;break;
			}
		else
		{
			Local_u8ERRORState=NOK;
		}
	}
	return Local_u8ERRORState;
}
u8 DIO_u8SetPortValue(u8 copy_u8PORT,u8 copy_u8VALUE)
{
	u8 Local_u8ERRORState=OK;
	if( copy_u8VALUE > DIO_u8_PORT_HIGH )
	{
		Local_u8ERRORState  = NOK;
	}
	else
	{

		switch(copy_u8PORT)
		{
		case DIO_u8_PORTA :PORTA =copy_u8VALUE;break;
		case DIO_u8_PORTB :PORTB =copy_u8VALUE;break;
		case DIO_u8_PORTC :PORTC =copy_u8VALUE;break;
		case DIO_u8_PORTD :PORTD =copy_u8VALUE;break;
		default: Local_u8ERRORState =NOK;break;
		}
	}

	return Local_u8ERRORState;
}

u8 DIO_u8ReadPinValue(u8 copy_u8PORT,u8 copy_u8PIN,u8* copy_Pu8VALUE)
{
	u8 Local_u8ERRORState=OK;
	if( copy_Pu8VALUE ==NULL )
	{
		Local_u8ERRORState=NULL_POINTER;
		return Local_u8ERRORState;
	}
	else
	{
		if(copy_u8PIN > DIO_u8_PIN7 )
		{
			Local_u8ERRORState=NOK;
		}
		else
		{
			switch(copy_u8PORT)
			{
			case DIO_u8_PORTA : * copy_Pu8VALUE=GET_BIT(PINA,copy_u8PIN);break;
			case DIO_u8_PORTB : * copy_Pu8VALUE=GET_BIT(PINB,copy_u8PIN);break;
			case DIO_u8_PORTC : * copy_Pu8VALUE=GET_BIT(PINC,copy_u8PIN);break;
			case DIO_u8_PORTD : * copy_Pu8VALUE=GET_BIT(PIND,copy_u8PIN);break;
			default: Local_u8ERRORState=NOK;break;
			}
		}


	}
	return Local_u8ERRORState;
}
