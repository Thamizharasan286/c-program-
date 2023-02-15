/* 
Task:pointer increament and decreament
Date:27/01/2023  */
#include<stdio.h>
int main()
{
	int *ptr1,a=12,b=121,c=142,d=115;
	ptr1=&a;
	ptr1=&b;
	ptr1=&c;
	ptr1=&d;
	printf("%d",*ptr1++);
	printf("\n%d",*ptr1);
}
