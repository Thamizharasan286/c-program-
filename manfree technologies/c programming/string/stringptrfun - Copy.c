/* 
Task:fuction task
Date:01/02/2023 */
#include<stdio.h>
char man(char []);
int main()
{
	char s[100];
	printf("enter the string");
	gets(s);
	char(*ptr)(char[]);
	ptr=man;
	ptr(s);
}
char man(char a[]) 
{
    printf("The string is %s",a);
}
