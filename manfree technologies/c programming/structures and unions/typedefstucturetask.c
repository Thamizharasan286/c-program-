/* 
Task:structure and union 4
Date:02/02/2023  */
#include<stdio.h>
typedef struct details
{
	char employee_name[50];
	int employee_id;
	int employee_salary;
}bosch;
int main()
{
   bosch a[50];
   bosch *ptr=&a;
int i;
for(i=0;i<2;i++)
{
	printf("Enter the employee_name\n");
	scanf("%s",&a[i].employee_name);
	printf("Enter the employee id\n");
	scanf("%d",&a[i].employee_id);
	printf("Enter the employee salary\n");
	scanf("%d",&a[i].employee_salary);
}
for(i=0;i<2;i++,ptr++)
{
printf("The employee name is    %s\n",ptr->employee_name);
printf("The employee id is      %d\n",ptr->employee_id);
printf("The employee salary is  %d\n",ptr->employee_salary);
}
}

