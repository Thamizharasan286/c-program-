/* 
Task:structure and union 3
Date:02/02/2023  */
#include<stdio.h>
struct details
{ 
	char name;
	char subject;
}thamizh,anbu;
int main()
{
scanf("%c %c",&thamizh.name,&thamizh.subject);
printf("\nThe student name is %c \n The subject is %c\n",thamizh.name,thamizh.subject);
scanf("\n%c %c",&anbu.name,&anbu.subject);
printf("\nThe student name is %c \n The subject is %c",anbu.name,anbu.subject);
}

