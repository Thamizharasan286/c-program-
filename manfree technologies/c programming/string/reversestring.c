/* 
Task:resverse string  */
#include<stdio.h>
int main()
{
	char num[20];
	int i,count=0;
	gets(num);
    while(num[i]!='\0')
  	{
  	i++;
  	count++;
}  	
for(i=count;i>=0;i--)
{
	printf("%c",num[i]);
}

}
