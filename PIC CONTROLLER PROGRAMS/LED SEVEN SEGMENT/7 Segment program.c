#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
TRISA=0x00;
PORTA=0x00;
ANSEL=0;ANSELH=0;
while(1)
{
PORTA=0xf9;
__delay_ms(10000);
PORTA=0xa4;
__delay_ms(10000);
PORTA=0xb0;
__delay_ms(10000);
PORTA=0x99;
__delay_ms(10000);
PORTA=0x92;
__delay_ms(10000);
PORTA=0x83;
__delay_ms(10000);
PORTA=0xf8;
__delay_ms(10000);
PORTA=0x80;
__delay_ms(10000);
PORTA=0x98;
__delay_ms(10000);
}
}