/*
Task:pointer to pointer 
Date:01/02/2023  */
#include<stdio.h>
int main()
{
	int a=10;
	int *ptr1,**ptr2,***ptr3;
	ptr1=&a;
	ptr2=&ptr1;
	ptr3=&ptr2;
	printf("\nThe value of a is    : %d", a);
	printf("\nThe value of ptr1 is : %d",*ptr1);
	printf("\nThe value of ptr2 is : %d",*(*ptr2));
	printf("\nThe value of ptr3 is : %d",*(*(*ptr3)));
}
