#include<reg51.h>

void delay_ms(unsigned int);
sbit led =P0^0;
void main(void)
{
	while(1)
	{
		led=0;
		delay_ms(400);
		led=1;
		delay_ms(400);
	}
}
void delay_ms(unsigned int i)
{
	unsigned int j;
	while(i-->0)
	{
		for(j=0;j<500;j++)
		{	
			;
		}
	}
}	
