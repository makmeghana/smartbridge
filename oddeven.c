/*
 * evenodd.c
 *
 * Created: 04-06-2019 15:40:40
 * Author : ganga
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		PORTD=0XAA;
		_delay_ms(2000);
		PORTD=0X55;
		_delay_ms(2000);
		
    }
}

