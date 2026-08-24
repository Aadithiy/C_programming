#include<stdio.h>
int isperfect(int n)
{
	int sum=0,i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	return sum==n;
}
int main()
{
	int arr[100],i,n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter the values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(isperfect(arr[i]))
		{
			printf("%d\n",arr[i]);
		}
	}
	return 0;
}
