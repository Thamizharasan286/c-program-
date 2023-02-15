/*
Task:two dimentional array matrix using pointer
Date:28/01/2023 */
#include<stdio.h>
void thamizh(int *);
int main()
{
	int arr[50][50];
	int *ptr;
	int i,j,n;
	printf("enter the  number what do you want");
	scanf("%d",&n);
	printf("Enter the number");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	ptr=arr;
	thamizh(arr);

}
void thamizh(int *m)
{
	int i,j,arr[50][50];
	printf("The matrix array is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
