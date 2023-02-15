/* 
Task:structute and union (type def)
Date:03/02/2023  */
#include<stdio.h>
#include "typedef.h"
void add(alpha,alpha);
void sub(alpha,alpha);
void mul(alpha,alpha);
void div(alpha,alpha);
int main()
{
	alpha x=20,y=10;
	add(x,y);
	sub(x,y);
    mul(x,y);
    div(x,y);
}
void add(alpha a,alpha b)
{
	alpha sum;
	sum=a+b;
	printf("\nThe addition value is %d",sum);
}
void sub(alpha a,alpha b)
{
	alpha sum;
	sum=a-b;
	printf("\nThe substraction value is %d",sum);
}
void mul(alpha a,alpha b)
{
	alpha sum;
	sum=a*b;
	printf("\nThe multiplication value is %d",sum);
}
void div(alpha a,alpha b)
{
	alpha sum;
	sum=a/b;
	printf("\nThe division value is %d",sum);
}
