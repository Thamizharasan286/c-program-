#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
char seg[]={0x37,0x0f,0x39,0x0f,0x39,0x31,0x3d,0x36,0x09,0x1e,0x30,0x38,0x36,0x36,0x3f,0x33,0x3f,0x33,0x2d,0x01,0x3e,0x30,0x36,0x00,0x00,0x09};
char seg1[]={0x88,0x2a,0x00,0x22,0x88,0x88,0x08,0x88,0x22,0x00,0x94,0x00,0x05,0x11,0x00,0x88,0x10,0x98,0x88,0x22,0x00,0x44,0x50,0x55,0x25,0x44};
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
for(int i=0,j=0;i<=26,j<=26;i++,j++)
{
PORTA=seg[i];
PORTB=seg1[j];
__delay_ms(10000);
}
}
}
