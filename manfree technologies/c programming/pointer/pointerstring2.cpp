/*
task:splitting name using poiter
Date:27/01/2023  */
#include<stdio.h>
int main()
{
	int i=0,j=0;
	char *str1,*str2,*str3;
	puts("enter the first string");
	gets(str1);
	puts("enter the second string");
	gets(str2);
	while(*str1)
	{
		str3[i++]=++*str1;
	}
	while(*str2)
	{
		str3[i++]=++*str2;
	}
	str3[i]='\0';
	puts(str3);
}
