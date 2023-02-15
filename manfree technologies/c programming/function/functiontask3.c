/* 
Task:function task 3
Date:24/01/2023 */
#include<stdio.h>
int var(int a[]);
int main()
{
	int a[50],i,num,op;
	printf("enter the number what you want");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("choose the operation\n1.add\n2.sub\n3.mul\n4.div\n5.mod\n");
	scanf("%d",&op);
}
int var(int a[])
{
	int  i,num;
	for(i=0;i<num;i++)
	{
	printf("%d",a);
    }
}
 switch(op)
{
	case1:
		b=0;
		b=b+a[i];
		return b;
		break;
		
}
