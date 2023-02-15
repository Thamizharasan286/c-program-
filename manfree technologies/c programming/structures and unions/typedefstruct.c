o/* 
Task:typedef using structure
Date:03/02/2023  */
#include<stdio.h>
typedef struct institution
{
	int student_marks;
	char student_name[20];
}tile;
int main()
{
	tile go;
	printf("Enter the student marks and name");
	scanf("%d %s",&go.student_marks,&go.student_name);
	printf("Student marks is %d\n student name is %s",go.student_marks,go.student_name);
}
