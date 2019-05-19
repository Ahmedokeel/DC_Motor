/*
 * DC_motor.c
 *
 * Created: 20/03/2019 11:34:55
 *  Author: ahmedkareem
 */ 

//set clock frequancy  

#ifndef F_CPU 
#define F_CPU 16000000UL
#endif



//called libraries
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRC=0xff; 
    while(1)
    {
		PORTC=0x01;                //rotate anti clockwise
        _delay_ms(300);           //wait 3 m seconds 
		PORTC=0x00;                //stop rotating 
		_delay_ms(300);            //wait 3m second
		PORTC=0x02;                //clock wise 
		_delay_ms(300);			   //wait 
		PORTC=0x03;                //stop
		_delay_ms(300);            //wait
    }
}