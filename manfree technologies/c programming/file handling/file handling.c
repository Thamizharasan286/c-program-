/*
Task:file handling
Date:06/02/2023  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	FILE *fp;
	fp=fopen("handling.txt","w");
	if(fp==NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("enter the number");
	scanf("%d",&n);
	fprintf(fp,"%d",n);
	fclose(fp);
	return 0;
}
