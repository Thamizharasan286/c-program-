/*
Task:file handling 3
Date:06/02/2023  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int age;
	char name[20],scl[50];
	FILE *fp;
	fp=fopen("handling3.txt","w");
	if(fp==NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("enter the student name\n ");
	scanf("%s",&name);
	printf("Enter the student age\n");
	scanf("%d",&age);
	printf("Enter the student school\n");
	getchar();
	gets(scl);
	//scanf("%[^NULL]",&scl);
	fprintf(fp,"%s\n",name);
	fprintf(fp,"%d\n",age);
	fprintf(fp,"%s\n",scl);
	fclose(fp);
	return 0;
}
