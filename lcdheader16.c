#include "lcdheader.h"

void PWM_init()
{
	
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB=(1<<PB3);
}
void send_a_command( unsigned char command)
{
	PORTC=command;
	PORTD&=~(1<<RS);
	PORTD|=(1<<E);
	_delay_ms(50);
	PORTD&=~(1<<E);
	PORTC=0;
}
void send_a_character(unsigned char character)
{
	PORTC=character;
	PORTD|=(1<<RS);
	PORTD|=(1<<E);
	_delay_ms(50);
	PORTD&=~(1<<E);
	PORTC=0;
}
void send_a_string(char *string_of_character)
{
	while(char*string_of_character>0)
	{
		send_a_character(*string_of_character++);
	}
}