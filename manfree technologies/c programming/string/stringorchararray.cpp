/* 
Task:string or characters of array */
#include<stdio.h>
int main()
{
	char str[100];
    printf("enter the string\n");
    scanf("%[^\\3]",str);
    printf("%s",str);
}
