#include<stdio.h>
int sumofdigit(int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	return sum;
}
int main()
{
	int arr[100],n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sumofdigit(arr[i])%2==0)
			printf("%d",arr[i]);
	}
	return 0;
}

