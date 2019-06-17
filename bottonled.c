/*
 * buttonled.c
 *
 * Created: 07-06-2019 10:58:42
 * Author : Karthik7781
 */
#ifdef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#define LED_OUTPUT PORTD
#define PIR_INPUT PINA
int main(void)

    {
		DDRA=0X00;
		DDRD=0XFF;
		while(1);
		{
			LED_OUTPUT = PIR_INPUT;
		}
	}
	
