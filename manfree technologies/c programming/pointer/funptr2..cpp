/*
Task:funtion pointer 3 
Date:01/02/2023  */
#include<stdio.h>
int thamizh(int, int);
int main()
{
	int (*ptr)(int,int);
	ptr=thamizh;   //addition
	int result=ptr(20,40);
	printf("addition is : %d",result);
	return 0;
}
int thamizh(int a,int b)
{
	int c=a+b;
	return c;
}
