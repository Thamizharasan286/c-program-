/*
Task:funtion pointer 3 
Date:01/02/2023  */
#include<stdio.h>
int add(int, int);
int mul(int,int);
int main()
{
	int (*ptr)(int,int);
	ptr=add;   //addition
	int addition=ptr(20,40);
	printf("addition value is : %d",addition);
	ptr=mul;   //multiplication
	int multiplication=ptr(20,40);
	printf("\nmultiple value is : %d",multiplication);
	return 0;
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
int mul(int x,int y)
{
	int z=x*y;
	return z;
}
