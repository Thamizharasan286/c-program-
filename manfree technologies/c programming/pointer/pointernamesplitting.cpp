/*
Task:pointer uisng addition
Date:30/01/2023 */
#include<stdio.h>
void thamizh(int *,int *);
int main()
{
	int a[50],b[50],i,n;
	int *p1,*p2;
	printf("Enter the matrix value");
	scanf("%d",&n);
	printf("Enter the first matrix values");
	for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("Enter the second matrix values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	p1=a;
	p2=b;
	thamizh(a,b);
	
}
void thamizh(int *x,int *y)
{
	printf("\n\t%d",((*x)*(*y))+((*(1+x))*(*(2+y))));
	printf("\t%d",(((*x)*(*(1+y)))+((*(1+x))*(*(3+y)))));
	printf("\n\t%d",(((*(2+x))*(*(2+y)))+((*(3+x))*(*y))));
	printf("\t%d",(((*(2+x))*(*(3+y)))+((*(3+x))*(*(1+y)))));
}
