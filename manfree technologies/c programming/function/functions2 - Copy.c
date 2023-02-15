/* 
Task:with arguement with return
Date:23/01/2023  */
#include<stdio.h>

	char airport(char,char);
	int main()
	{
	   char result;
		printf("the adding result is:");
		
	result=airport('v','n');
	printf("%c\n",result);
		
	}
	char airport(char a,char b)
	{
		int e=0;
	    e=a+b;
		return e;
	}

