#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
TRISA=0x00;
PORTA=0x00;
ANSEL=0;ANSELH=0;
while(1)
{
PORTA=0x3f;
__delay_ms(10000);
PORTA=0x06;
__delay_ms(10000);
PORTA=0x5b;
__delay_ms(10000);
PORTA=0x4f;
__delay_ms(10000);
PORTA=0x66;
__delay_ms(10000);
PORTA=0x6d;
__delay_ms(10000);
PORTA=0x7c;
__delay_ms(10000);
PORTA=0x07;
__delay_ms(10000);
PORTA=0x7f;
__delay_ms(10000);
PORTA=0x67;
__delay_ms(10000);
}
}
