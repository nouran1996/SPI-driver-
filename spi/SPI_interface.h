/*
 * SPI_interface.h
 *
 *  Created on: Dec 24, 2020
 *      Author: AHMED
 */

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

#define SPI_u8Master 1
#define SPI_u8Slave  0

void SPI_voidInit(u8 Copy_u8Clock);
u8 SPI_u8Transeive(u8 Copy_u8Data);



#endif /* SPI_INTERFACE_H_ */
