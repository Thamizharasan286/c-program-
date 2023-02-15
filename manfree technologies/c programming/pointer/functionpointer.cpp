/* 
Task:function pointer
Date:01/02/2023  */
#include<stdio.h>
void fun(int);	
int main()
{
	char arr=20;
	fun(arr);
}
void fun(int b)
{
	printf("%d\n",sizeof(b));
	printf("%d\n",&b);
}



