#include<stdio.h>
int main()
{
	int principal,rate,time,simple_intrest;
	printf("Enter princple,rate,time:");
	scanf("%d %d %d",&principal,&rate,&time);
	if(principal<0&&time<0&&rate<0)
	{
		printf("Error : All values must be positive");
	}
	else
	{
		simple_intrest=(principal * rate * time) / 100;
		printf("Simple Intrest of %d is %d",principal,simple_intrest);
	}
	return 0;
}
