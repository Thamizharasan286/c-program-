#include<pic.h>
# define _XTAL_FREQ 400000
void main()
{
int i,j,k,l,breakloop=0;
char seg1[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x83,0xf8,0x80,0x98};
TRISA=0x11;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
if(RA0==0&&RA4==0)
{
RA2=0;RA1=1;
PORTC=0xc0;;
__delay_ms(500);
RA1=0;RA2=1;
PORTC=0xc0;
__delay_ms(500);
}
if(RA0==1)
{
breakloop=0;
for(int i=0;i<=9;i++)
{
if(breakloop==1)
break;
for(int j=0;j<=9;j++)
{
if(breakloop==1)
break;
RA2=0;RA1=1;
PORTC=seg1[i];
__delay_ms(500);
RA1=0;RA2=1;
PORTC=seg1[j];
__delay_ms(500);
if(RA4==1)
{
for(int k=i;k>=0;k--)
{
for(int l=j;l>=0;l--)
{
RA2=0;RA1=1;
PORTC=seg1[k];
__delay_ms(500);
RA1=0;RA2=1;
PORTC=seg1[l];
__delay_ms(500);
if(RA0==1&&RA4==0)
{
for(int m=k;m<=9;m++)
{
for(int n=l;n<=9;n++)
{
RA2=0;RA1=1;
PORTC=seg1[m];
__delay_ms(500);
RA1=0;RA2=1;
PORTC=seg1[n];
__delay_ms(500);
if(RA0==0&&RA4==1)
{
for(int o=9;o>=0;o--)
{
for(int p=9;p>=0;p--)
{
RA2=0;RA1=1;
PORTC=seg1[o];
__delay_ms(500);
RA1=0;RA2=1;
PORTC=seg1[p];
__delay_ms(500);
if(RA0==1&&RA4==1)
{
for(int r=i;r>=1;)
{
for(int s=j;s>=1;)
{
RA2=0;RA1=1;
PORTC=seg1[r];
__delay_ms(500);
RA1=0;RA2=1;
PORTC=seg1[s];
__delay_ms(500);
}
}
}
}
}
}
}
}
}
}
}
breakloop=1;
}
}
}
}
}
}
	