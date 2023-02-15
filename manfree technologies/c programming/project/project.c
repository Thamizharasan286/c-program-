/* 
Task:project
Date:30/01/2023  */
#include<stdio.h>
int main()
{
	int option,n,kg,nos;
	printf("\nWelcome to our shop please select the product what do you want");
	menu:
	printf("\n\n1.vegetables\n2.fruits\n3.groceries\n4.exit");
	scanf("%d",&option);
	switch(option)
	{
		
		case 1:
			printf("\n1.tomato=20 rs/kg\n2.potato=10 rs/kg\n3.carrot=25 rs/kg");
			scanf("%d",&n);
			if(n==1)
			{
				printf("how many kgs tomatos do you want");
				scanf("%d",&kg);
				int tomatos=20*kg;
				printf("Total amount is : %d",tomatos);
			}
			else if(n==2)
			{
				printf("how many kgs potatos do you want");
				scanf("%d",&kg);
				int potatos=10*kg;
				printf("Total amount is : %d",potatos);
				
			}
			else if(n==3)
			{
				printf("how many kgs carrots do you want");
				scanf("%d",&kg);
				int carrots=25*kg;
				printf("Total amount is : %d",carrots);
			}
			break;
		case 2:
		    printf("\n1.appale=120 rs/kg\n2.mango=60 rs/kg\n3.orange=80 rs/kg");
		    scanf("%d",&n);
		    	if(n==1)
			{
				printf("how many kgs apples do you want");
				scanf("%d",&kg);
				int apples=120*kg;
				printf("Total amount is : %d",apples);
			}
			else if(n==2)
			{
				printf("how many kgs mangoes do you want");
				scanf("%d",&kg);
				int mangoes=60*kg;
				printf("Total amount is : %d",mangoes);
			}
			else if(n==3)
			{
				printf("how many kgs oranges do you want");
				scanf("%d",&kg);
				int oranges=80*kg;
				printf("Total amount is : %d",oranges);
			}
		    break;
		case 3:
		    printf("\n1.pencil=10 rs/pcs=\n2.soap=20 rs/pcs\n3.horlicks=5 rs/pkt");
		    scanf("%d",&n);
		    	if(n==1)
			{
				printf("how many pencils do you want");
				scanf("%d",&nos);
				int pencils=10*nos;
				printf("Total amount is : %d",pencils);
				
			}
			else if(n==2)
			{
				printf("how many soaps do you want");
				scanf("%d",&nos);
				int soaps=20*nos;
				printf("Total amount is : %d",soaps);
				
			}
			else if(n==3)
			{
				printf("how many horlicks do you want");
				scanf("%d",&nos);
				int horlicks=5*nos;
				printf("Total amount is : %d",horlicks);
			}
			break;
			goto menu
		case 5:
			printf("Thanks for your visit");
			break;
	}
}
