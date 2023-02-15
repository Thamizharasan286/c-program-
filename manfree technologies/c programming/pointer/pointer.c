/*
Task:pointer 
Date:26/01/2023  */
#include<stdio.h>
int main()
{
	int *p;
	int var=20;
	p=&var;
	printf("value of var is: %d",var);
	printf("\nvalue of var is: %d",*p);
	printf("\naddress of var is: %p",&var);
	printf("\naddrss of var is: %p",p);
	printf("\naddress of ptr is: %p",&p);
}
