#include <stdio.h>
#include <math.h>
int main()
{
	int n,copy,sum=0,digits;
	printf("Enter the number:");
	scanf("%d",&n);
	copy=n;
	while(copy>0)
	{
		copy=copy/10;
		digits++;
	}
	copy=n;
	while(copy>0)
	{
		sum=sum+pow((copy%10),digits);
		copy/=10;
	}
	if(sum==n)
	{
		printf("The given number is amstrong");
	}
	else
	{
		printf("The given number is not a amstrong");
	}
	return 0;
}

