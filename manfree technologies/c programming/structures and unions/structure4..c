/* 
Task:structure and union 4
Date:02/02/2023  */
#include<stdio.h>
struct details
{
	char student_name[50];
	int student_age;
	int student_roll;
};
int main()
{
struct details a[50];
int i;
for(i=0;i<2;i++)
{
	printf("Enter the student name\n");
	scanf("%s",&a[i].student_name);
	printf("Enter the student age\n");
	scanf("%d",&a[i].student_age);
	printf("Enter the student roll\n");
	scanf("%d",&a[i].student_roll);
}
for(i=0;i<2;i++)
{
printf(" %s\n",a[i].student_name);
printf(" %d\n",a[i].student_age);
printf(" %d\n",a[i].student_roll);
}
}

