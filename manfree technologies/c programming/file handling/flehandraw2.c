/*
Task:file handling read and write 2
Date:06/02/2023  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	FILE *fp;
	fp=fopen("handlingraw.txt","w+");
	if(fp==NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("enter the number");
	fscanf(fp,"%d",&n);
	fprintf(fp,"%d",n);
	fclose(fp);
	return 0;
}
