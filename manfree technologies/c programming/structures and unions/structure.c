/* 
Task:structure and union
Date:02/02/2023  */
#include<stdio.h>
struct institute
{
	char student_name;
	int student_age;
	float student_height;
	float student_weight;
	double student_marks;
	
}college;
void main()
{
	college.student_name='f';
	college.student_age=25;
	college.student_height=180.23;
	college.student_weight=87.50;
	college.student_marks=424.843497365876397653;
	printf("student name is %c",college.student_name);
	printf("\nstudent age is %d",college.student_age);
	printf("\nstudent height is %f",college.student_height);
	printf("\nstudent weight is %f",college.student_weight);
	printf("\nstudent marks is %lf",college.student_marks);
	printf("\nsize of college is %d",sizeof(college));
	//printf("\nsize of institute is %d",sizeof(institute));
	
}
