/* 
Task:array used in string
Date:27/01/2023  */
#include<stdio.h>
void copy(char*,char*);
void main()
{
	char a[10]="thamizh";
	char *p;
	copy(p,a);
	printf("%s",p);
}
void copy(char *x,char *y)
{
   int i;
   for(i=0;y[i]!='\0';i++)
   {
   	x[i]=y[i];
   }
   x[i]='\0';	
}
