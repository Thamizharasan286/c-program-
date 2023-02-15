/* 
Task:function task 2
Date:24/01/2023  */
#include<stdio.h>
int var(int a[]);
int main()
{
  int b[50];
  int i;
  for(i=0;i<4;i++)
  scanf("%d",&b[i]);
  var(b);
  var(b);
}
var(int b[])
{
	int i;
	for(i=0;i<4;i++)
	printf("%d\n",b[i]);
}

