/* 
Task:resverse string  */
#include<stdio.h>
int main()
{
	char str[30];
	int sum1=0,sum2=0,sum3=0,sum4=0,i;
    gets(str);
	for(i=0;str[i]!='\0';i++)
	{
    if((str[i]>64)&&(str[i]<91))
	{
    	sum1++;
	}
	else if((str[i]>96)&&(str[i]<123))
	{
		sum2++;
	}
    else if((str[i]>47)&&(str[i]<58))
	{
		sum3++;
	}
    else if(((str[i]>31)&&(str[i]<48))||((str[i]>57)&&(str[i]<65))||((str[i]>122)&&(str[i]<254)))
    {
    	sum4++;
	}
 	}
	printf("The capital letters is %d:",sum1);
	printf("\nThe small latter is %d:",sum2);
	printf("\nThe numbers is %d:",sum3);
    printf("\n The special charecter is %d:",sum4);
	
}
