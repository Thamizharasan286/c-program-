/* 
Task:array to pointer 2
Date:31/01/2023   */
#include<stdio.h>
int main()
{
	int a[4]={4,2,21,11},b[4]={32,15,16,13},c[4]={17,28,49,15},i,j;
	int *p1[4];
	p1[0]=a;
	p1[1]=b;
	p1[2]=c;
    for(i=0;i<3;i++)
{
		for(j=0;j<4;j++)
		{
			printf("Index value is %d\n",*(p1[i])+j);
			printf("Address value is %d\n",(p1[i])+j);
		}
	}

}
