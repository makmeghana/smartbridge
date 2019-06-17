/*
 * GccApplication1.c
 *
 * Created: 04-06-2019 12:42:15
 * Author : ganga
 */
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD=0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTD = 0XFF;
		_delay_ms(220);
		PORTD = 0X00;
		_delay_ms(220);
		
		
		
    }
}

