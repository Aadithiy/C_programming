#include<stdio.h>
int reverse(int n)
{
	int count=0,i,rev=0,rem=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
int main()
{
	int arr[100],i,n,count=0;
	printf("Enter the number of Elements:");
	scanf("%d",&n);
	printf("Enter the Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(reverse(arr[i])==arr[i])
		{
			count++;
		}

	}
	printf("%d",count);
	return 0;
}

