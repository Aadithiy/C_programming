#include<stdio.h>
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int isstrongnumber(int n)
{
	int digit,sum=0;
	while(n>0)
	{
	digit=n%10;
	sum=sum+factorial(digit);
	n=n/10;
	}
	return sum;
}
int main()
{
	int n,strong=0;
	printf("Enter the Number:");
	scanf("%d",&n);	
	strong=isstrongnumber(n);
	if(n==strong)
	{
		printf("It is strong Number");
	}
	else 
	{
		printf("It is not a Strong Number");
	}
	return 0;
}
