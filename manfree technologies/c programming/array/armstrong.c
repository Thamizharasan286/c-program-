#include<stdio.h>
int main()
{
	int i,j,n,m=0,arm;
	printf("Enter the number");
	scanf("%d",&n);
	arm=n;
	while(n>0)
	{
		j=n%10;
		m=m+j*j*j;
		n=n/10;
	}
	if(m==arm)
	{
		printf("The number is armstrong");
	}
	else
	{
	    printf("The number is not armstrong");
	}
}	
