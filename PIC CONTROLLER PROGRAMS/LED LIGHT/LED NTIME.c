#include<pic.h>
void main()
{
TRISB=0x00;
TRISA=0x00;
TRISC=0x00;
TRISD=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
PORTB=0xff;
PORTA=0xff;
PORTC=0xff;
PORTD=0xff;
}
}