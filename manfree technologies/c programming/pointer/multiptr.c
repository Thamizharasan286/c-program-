/* 
Task:array passing functiom
Date:26/01/2023 */
#include<stdio.h>
int main()
{
	int *p1;
	int a=1,b=2,c=3;
	p1=&a;
	p1=&b;
	p1=&c;
	printf("The value of pointer is :\n%d\n%d\n%d",*p1,*p1++,*p1++);
	printf("\nThe address of pointer a b c is :\n%d\n%d\n%d",p1,p1++,p1++);
	printf("\nThe address of a is : %d",&a);
	printf("\nThe address of b is : %d",&b);
	printf("\nThe address of c is : %d",&c);

	
}
