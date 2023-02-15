/*
Task:file handling 3
Date:06/02/2023  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int age;
	char name[20],scl[70];
	FILE *fp;
	fp=fopen("handlingread3.txt","r");
	if(fp==NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("enter the student name\n ");
	fscanf(fp,"%s",&name);
	printf("Enter the student age\n");
	fscanf(fp,"%d",&age);
	printf("Enter the student school\n");
	//getchar();
	fgetc(fp);
	fgets(scl,70,fp);
	printf("%s\n",name);
	printf("%d\n",age);
	puts(scl);
	//scanf("%[^NULL]",&scl);
	
	fclose(fp);
	return 0;
}
