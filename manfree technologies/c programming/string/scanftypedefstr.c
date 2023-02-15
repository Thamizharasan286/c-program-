/* 
Task:stucture poiter
Date:03/02/2023 */
#include<stdio.h>
typedef struct details
{
	char student_name[20];
	int student_roll;
	float student_marks;
}self;
int main()
{
	self s1={"thamizh",1234,87.45};
	self *ptr=&s1;
	//printf("The student name is %s\n The student roll no is %d\n The student marks is %f",ptr->student_name,ptr->student_roll,ptr->student_marks);
	printf("The student name is %s\n The student roll no is %d\n The student marks is %f",(*ptr).student_name,(*ptr).student_roll,(*ptr).student_marks);

}
