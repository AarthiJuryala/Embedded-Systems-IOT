#include<reg51.h>
#define led P0
void delay_ms(unsigned int);
void main(void)
{
	while(1)
	{
		led=0x0c;
		delay_ms(400);
		led=0x03;
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
