/*
Task:function task 2
Date:01/02/2023  */
#include<stdio.h>
char mail(char []);
int main()
{
	char arr[50];
	printf("Enter the string\n");
	gets(arr);
	char (*ptr)(char[]);
	ptr=mail;
	ptr(arr);
}
char mail(char a[])
{
	int i;
	for(i=0;a[i]!=10;i++)
	{
	printf("%c",a[i]);
}
	
}
