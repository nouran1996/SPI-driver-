/*
 * SPI_program.c
 *
 *  Created on: Dec 24, 2020
 *      Author: NOURAN
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SPI_register.h"
#include "SPI_interface.h"

void SPI_voidInit(u8 Copy_u8Role)
{

	SET_BIT(SPCR,SPCR_SPE);
	if(Copy_u8Role==SPI_u8Master)
	{
		SET_BIT(SPCR,SPCR_MSTR);
		CLR_BIT(SPCR,SPCR_SPR1);
		CLR_BIT(SPCR,SPCR_SPR0);
		//SET_BIT(SPSR,SPSR_SPI2X);
	}
   if(Copy_u8Role==SPI_u8Slave)
   {
	   CLR_BIT(SPCR,SPCR_MSTR);
   }
}
u8 SPI_u8Transeive(u8 Copy_u8Data)
{
	SPDR=Copy_u8Data;
	while((GET_BIT(SPSR,SPSR_SPIF))==0)

		return Copy_u8Data;
}
