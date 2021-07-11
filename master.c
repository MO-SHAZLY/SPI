/*
 * SPI.c
 *
 *  Created on: Mar 27, 2021
 *      Author: DELL
 */
#include <avr/io.h>
#include <master.h>

void spi_init_master (void)
{
    // Set MOSI, SCK as Output
	//(1<<MOSI)|(1<<SCK)
    DDRB = (1<<5)|(1<<7);

    // Enable SPI, Set as Master
    SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR1);
}


void SPI_MasterTransmit(char cData)
{
/* Start transmission */
SPDR = cData;
/* Wait for transmission complete */
while(!(SPSR & (1<<SPIF)));
}
