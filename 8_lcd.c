#include <reg51.h>
#define ldata P1
sbit rs=P0^4;
sbit rw=P0^5;
sbit en=P0^6;
sbit back_lite=P0^7;
void ms_delay(unsigned int);
void lcdcmd(unsigned char);
void lcddata(unsigned char);
void lcdready();

void main(void){
	unsigned char lcd_command[]={0x38,0x0e,0x01,0x06,0x83};
	unsigned char lcd_message[]="Hello";
	unsigned char lcd_command1[]={0x38,0x0e,0x06,0xc0,0xc2};
	unsigned char lcd_message1[]="CBIT";

	unsigned char c,d;
	back_lite=0;
	for(c=0;c<5;c++){
		lcdcmd(lcd_command[c]);
	}
	for(d=0;d<5;d++){
		lcddata(lcd_message[d]);
		ms_delay(30);
	}
	back_lite=1;
	for(c=0;c<5;c++){
		lcdcmd(lcd_command1[c]);
	}
	for(d=0;d<5;d++){
		lcddata(lcd_message1[d]);
		ms_delay(30);
	}
	while(1){}

}

void lcdcmd(unsigned char v){
 	ldata=v;
	rs=0;
	rw=0;
	en=1;
	ms_delay(1);
	en=0;
	return;
}

void lcddata(unsigned char v){
 	ldata=v;
	rs=1;
	rw=0;
	en=1;
	ms_delay(1);
	en=0;
	return;
}

void ms_delay(unsigned int time)
{   
    unsigned int i,j;
    for(i=0;i<time;i++){
		for(j=0;j<1000;j++);
	}
}