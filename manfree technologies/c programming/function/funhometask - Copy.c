/*
Task:function task home work with return with arguement 
Date:25/01/2023   */
#include<stdio.h>
int thamizh(int a[],int m)
{
	int i;
	for(i=0;i<m;i++)
	printf("%d",a[i]);
}
void main()
{
	int s[10],i,n;
	printf("enter the number what do you want");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	thamizh(s,n);
}
