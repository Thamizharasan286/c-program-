/*
Task:file handling  reading
Date:06/02/2023  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	FILE *fp;
	fp=fopen("handlingread.txt","r");
	if(fp==NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("enter the number");
	fscanf(fp,"%d",&n);
	printf("%d",n);
	fclose(fp);
	return 0;
}
