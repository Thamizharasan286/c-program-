/* 
Task:array to pointer 2
Date:31/01/2023   */
#include<stdio.h>
int main()
{
	int a[4]={1,2,3,11};//,b[4]={4,5,6,13},c[4]={7,8,9,15};
	int *p1[4];
	p1[0]=a;
	//p1[1]=&b;
	//p1[2]=&c;
	printf("\n%d\n",*((p1[0])+2));
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			printf("Index value is %d\n",*(p1[i])+j);
//			printf("Address value is %d\n",(p1[i])+j);
//		}
//	}

}
