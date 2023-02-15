/* 
Task:char uing array  */
#include<stdio.h>
int main()
{
	char a[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nThe alphabet is %c",a[i]);
	}
}
