#include<reg51.h>

sbit led=P0^0;
sbit sw=P2^0;

void delay_ms(unsigned int);	 

void main(void){
   	while(1){
   		if(sw==0)
   		{
     		led = ~led;
     		delay_ms(200);
   		}
	}
}

void delay_ms(unsigned int i){
	unsigned int j;
 	while(i-->0){
     	for (j=0;j<500;j++){
	             ;
		} 
	}
}