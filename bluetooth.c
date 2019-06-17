/*
 * bluetooth.c
 *
 * Created: 13-06-2019 11:23:51
 * Author : Karthik7781
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#define USART _BAUDRATE 9600
#endif 


#include <avr/io.h>
#include <inttypes.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define LED_PORTB
char buffer[10];

void USARTnit(int ubrr_value)
{
	UBRRL=ubrr_value;
	UBRRH=(ubrr_value>>8);
	UCSRC=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	UCSRB=(1<<RXEN)|(1<<TXEN);
}
char USARTReadChar()
{	
	while(!(USCRA&(1<<UDRE)))
{	
}
return UDR;
}
void USARTWriteChar(char data)
{
	while(!(USCRA&(1<<UDRE)))
	{
	}
	UDR =data;	
}

int main(void)
{
	USARTInit(77);
	DDRB=0XFF;
	char data;
	LED=0;
	while(1)
	{
		data = USARTReadChar();
		if(data=='1')
		{
			LED|=0XFF;
		}
		else if(data=='2')
		{
			LED=0X00;
		}
		
	}
	return 0;
}
