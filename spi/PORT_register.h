#ifndef PORT_REGISTER_H_
#define PORT_REGISTER_H_

#define PORTA  *((volatile char*)0x3B)
#define DDRA   *((volatile char*)0x3A)




#define PORTB  *((volatile char*)0x38)
#define DDRB   *((volatile char*)0x37)




#define PORTC  *((volatile char*)0x35)
#define DDRC   *((volatile char*)0x34)




#define PORTD  *((volatile char*)0x32)
#define DDRD   *((volatile char*)0x31)

#endif
