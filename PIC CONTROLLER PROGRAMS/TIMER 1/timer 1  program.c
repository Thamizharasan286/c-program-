#include<pic.h>
#define _XTAL_FREQ 4000000
#define LED RA0
void pulse()
{
RC7=1;
__delay_ms(10);
RC7=0;
__delay_ms(10);
}
void type(int a,int b)
{
RC5=b;RC6=0;
PORTD=a;
pulse();
}
void main()
{
int count=0;
TRISA=0x00;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x00;ANSELH=0x00;
T1CON=0x29;
//TMR1=55536;  //give the value is directly
TMR1L=0xF0;
TMR1H=0xD8;    //give the value is splittingly
//type(0x02,0);
type(0x38,0);
type(0x0E,0);
int x,y,z;
while(1)
{
if(TMR1IF==1)
{
count++;
x=count/100;
y=(count%100)/10;
z=count%10;
type(0x80,0);
type(0x30+x,1);
type(0x81,0);
type(0x30+y,1);
type(0x82,0);
type(0x30+z,1);
TMR1IF=0;
TMR1L=0xF0;
TMR1H=0xD8;
//TMR1=55536;
}
if(count>=0&&count<=25)
{
LED=1;
}
if(count>25&&count<=50)
{
LED=0;
}
if(count>50)
{
count=0;
}
}
}
 