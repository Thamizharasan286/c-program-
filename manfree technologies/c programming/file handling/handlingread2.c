/*
Task:file handling read 2
Date:06/02/2023  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a[10];
	FILE *fp;
	fp=fopen("handlingread2.txt","r");
	if(fp==NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("enter the number");
	fscanf(fp,"%d%",&n);
	int i;
	for(i=0;i<n;i++)
	{
	fscanf(fp,"%d",&a[i]);
}
    for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	fclose(fp);
	return 0;
}
