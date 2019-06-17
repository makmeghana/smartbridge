/*
 * hfile2.c
 *
 * Created: 14-06-2019 10:15:58
 * Author : Karthik7781
 */ 
#include "lcdheader16.c"                              
int main(void)
{
	PWM_init();
	DDRC=0XFF;
	DDRA=0X00;
	DDRD=0XFF;
	_delay_ms(50);
	ADMUX|=(1<<REFS0)|(1<<REFS1);
	ADCSRA|=(1<<ADEN)|(1<<ADATE)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
	int count=0;
	char showa[3];
	send_a_command(0X01);
	_delay_ms(50);
	send_a_command(0x38);
	_delay_ms(50);
	send_a_command(0x0E);
	_delay_ms(50);
	ADCSRA|=(1<<ADSC);
	
	while (1)
	
	{
		count=ADC/4;
		OCR0=count;
		send_a_command(0X80+0X40+0);
		send_a_string("Temp(C)= ");
		send_a_command(0X80+0X40+8);
		
		itoa(count,showa,10);
		send_a_string(showa);
		send_a_string("  ");
		send_a_command(0X80+0);
	}
}

    

