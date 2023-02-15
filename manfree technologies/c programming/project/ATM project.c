/* 
Task:atm project
Date:14/02/2023  */
#include<stdio.h>
int main()
{
	int amount=1000,deposit,withdraw,choice,pin;
	int transaction;
	menu:
	system("cls");
	while(pin!=2868)
	{
		printf("Enter the secret number");
		scanf("%d",&pin);
		if(pin!=2868)
		printf("Please enter the valid password\n");
	}
	do
	{
		printf("********Welcome to canara bank ATM********");
		printf("\n\n\n 1.check balance                              2.withdraw case\n");
		printf("\n 3.deposit cash                               4.quit");
		printf("\n***************************************************************\n");
		printf("\n\n\nEnter the option");
		scanf("\n%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n Your balance in Rs  : %d",amount);
				break;
			case 2:
				printf("\n Enter the amount to withdraw :");
				scanf("%d",&withdraw);
				if(withdraw%100!=0)
				{
					printf("\n Please enter the amount in multiples of 100");
				}
				else if (withdraw>(amount-500))
				{
					printf("\n Insufficent balance");
				}
				else
				{
					amount=amount-withdraw;
					printf("\n Plaese collect your cash");
					printf("\n your current balance is %d",amount);
				}
				break;
			case 3:
				printf("\n Enter the amount to deposit");
				scanf("%d",&deposit);
				amount=amount+deposit;
				printf("\nYour balance is %d",amount);
				break;
			case 4:
				printf("\n Thank you for using this ATM");
				break;
			default:
				printf("\n Invalid choice");
		}
		printf("\n\n\n\n Do you want to continue the transaction : \n");
		scanf("%d",&transaction);
		if(transaction==1)
		{
}	}	while(transaction==2);
		goto menu;
     printf("\n\n Thanks for using out ATM service");
}


