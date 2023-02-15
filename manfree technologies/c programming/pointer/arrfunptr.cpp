/*
Task:arrayfunpointer r
Date:01/02/2023  */
#include<stdio.h>
int operation(int,int);
int main()
{
	int (*ptr[3])(int,int);
	ptr[0]=add;
	ptr[1]=sub;
	ptr[2]=mul;
	int sum=ptr(32,18);
	printf("Addition value is : %d",sum);
	
}
int operation(int a,int b);
{
	int x=a+b;
	    y=a-b;
	    z=a*b;
	    return x,y,z;
	
}
