/*
 * main.c
 *
 *  Created on: Mar 26, 2021
 *      Author: DELL
 */

#include "DIO.h"
#include "BIT_MATH.h"
#include "util/delay.h"

int main()
{
	spi_init_master();
	DIO_Init();

	while(1)
	{
	 SPI_MasterTransmit('1');
	 _delay_ms(100);
	 SPI_MasterTransmit('2');
	}
}

