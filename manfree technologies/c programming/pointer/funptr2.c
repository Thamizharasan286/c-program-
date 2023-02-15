/*
Task:function pointer 2
Date:01/02/2023  */
#include<stdio.h>
int sub(int,int);
int main()
{ 
int (*ptr)(int,int);
ptr=sub;
int sum=ptr(12,5);
printf("The substracting value is: %d",sum);
return 0;
}
int sub(int a,int b)
{ 
int c=a-b;	
}
