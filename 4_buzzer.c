#include<reg51.h>
#define buzzer P0

void delay_ms(unsigned int);

void main(void){
   	while(1){
   		buzzer=0x2F;
		delay_ms(200);
 		buzzer=0x00;
		delay_ms(800);
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
