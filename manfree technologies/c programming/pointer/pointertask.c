/*
Task:pointer adding task
Date:26/01/2023  */
#include<stdio.h>
int main()
{
   int a=20,b=40,c=0;  
   int *ptr1,*ptr2,ptr3;
   ptr1=&a;
   ptr2=&b;
   printf("address of the ptr1 %p",&ptr1);
   printf("\naddress of the ptr2 %p",&ptr2);
   printf("\nvalue of ptr1 is %d",*ptr1);
   printf("\nvalue of ptr2 is %d",*ptr2);
   c=*ptr1+*ptr2;
   printf("\nThe total value of the *ptr1+*ptr2 is=%d",c);
   c=*ptr1-*ptr2;
   printf("\nThe total value of the *ptr1-*ptr2 is=%d",c);
   c=ptr1-ptr2;
   printf("\n%d",c);
   ptr1++;
   printf("\n%p",ptr1);
   ptr2--;
   printf("\n%p",ptr2);
}
