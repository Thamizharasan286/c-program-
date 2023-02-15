#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,i;  //Variable declaration
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    while(num2 != 0)
	{
int num3=(num1 & num2);
num1=num1^num2;
num2=num3<<1;
}
printf("Sum of two numbers is:%d ",num1);
getch();
    return 0;
}
