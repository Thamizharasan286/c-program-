/*
Task:function using in pointer
Date:27/01/2023  */
#include<stdio.h>
int thamizh(int,int);
int main()
{
    int x=10,y=20,*ptr1,*ptr2,result;
    ptr1=&x;
    ptr2=&y;
    result=thamizh(x,y);
    printf("%d",result);
    printf("\n%p",&result);
    printf("\naddress of x %d",&x);
    printf("\naddress of y %d",&y);
    printf("\nvalue of x %d",x);
    printf("\nvalue of y %d",y);
}
int thamizh(int a,int b)
{
	int c=0;
	c=a+b;
	return c;
}
   
   
   
