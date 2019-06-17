/*
 * buttonmotor.c
 *
 * Created: 11-06-2019 11:26:05
 * Author : Karthik7781
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRD=0XFF;
	DDRB=0X00;
    while (1) 
    {
		if((PINB&(1<<PB0))==0)
		{
			PORTD|=(1<<PD0);
			_delay_ms(2000);
			PORTD&=~(1<<PD1);
			_delay_ms(2000);
    }
	{
		if((PINB&(1<<PB1))==0)
		{
		PORTD|=(1<<PD1);
		_delay_ms(2000);
		PORTD&=~(1<<PD0);
		_delay_ms(2000);
	}
	}
}
}
