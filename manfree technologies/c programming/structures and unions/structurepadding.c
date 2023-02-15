/* 
Task:structure padding
Date:02/02/2023  */
#include<stdio.h>
#pragma pack(1)
struct padd
{
	int a;
	char b;
	float c;
	double d;
};
int main()
{
	struct padd go;
	printf("%d",sizeof(go));
}
