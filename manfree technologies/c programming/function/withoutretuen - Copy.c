/* 
Task:function with arguements without return
Date:25/01/2023 */
#include<stdio.h>
void thamizh(int,int);
void thamizh(int a,int b)
{
	int c;
	c=a+b;
	printf("%d",c);
}
int main(int x,int y)
{
	printf("Enter the number");
	scanf("%d%d",&x,&y);
	thamizh(x,y);
}
