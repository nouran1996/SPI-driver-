#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#define NOK  2
#define OK   1
#define NULL 0
#define NULL_POINTER  0

#define DIO_u8_PORTA   0
#define DIO_u8_PORTB   1
#define DIO_u8_PORTC   2
#define DIO_u8_PORTD   3

#define DIO_u8_PIN0   0
#define DIO_u8_PIN1   1
#define DIO_u8_PIN2   2
#define DIO_u8_PIN3   3
#define DIO_u8_PIN4   4
#define DIO_u8_PIN5   5
#define DIO_u8_PIN6   6
#define DIO_u8_PIN7   7

#define DIO_u8_PIN_OUTPUT   1
#define DIO_u8_PIN_INPUT    0

#define DIO_u8_PIN_HIGH   1
#define DIO_u8_PIN_LOW    0

#define DIO_u8_PORT_HIGH   0xff
#define DIO_u8_PORT_LOW    0

#define DIO_u8_PORT_OUTPUT   0xff
#define DIO_u8_PORT_INPUT    0

u8 DIO_u8SetPinDirection(u8 copy_u8PORT,u8 copy_u8PIN,u8 copy_u8DIRECTION);
u8 DIO_u8SetPortDirection(u8 copy_u8PORT,u8 copy_u8DIRECTION);

u8 DIO_u8SetPinValue(u8 copy_u8PORT,u8 copy_u8PIN,u8 copy_u8VALUE);
u8 DIO_u8SetPortValue(u8 copy_u8PORT,u8 copy_u8VALUE);

u8 DIO_u8ReadPinValue(u8 copy_u8PORT,u8 copy_u8PIN,u8* copy_Pu8VALUE);




#endif
