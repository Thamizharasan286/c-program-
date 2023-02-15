#include<stdio.h>
int main()
{
	FILE *fp;
	char str[80],add[100];
	int age;
	fp=fopen("apending2.txt","a");
	printf("Enter the name\n");
	gets(str);
	printf("Enter the age\n");
	scanf("%d",&age);
	printf("Enter the address\n");
	getchar();
	gets(add);
	fprintf(fp,"\n%s",str);
	fprintf(fp,"\n%d",age);
	fprintf(fp,"\n%s",add);
	printf("your message is in apending.txt go and check");
	fclose(fp);
	return 0;
}
