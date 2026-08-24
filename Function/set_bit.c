#include <stdio.h>
int setbits(int n)
{
	int count=0;
	while(n>0)
	{
		if(n&1)
		{
			count++;
			n=n>>1;
		}
	}
	return count;
}
int main()
{
	int arr[100],i,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(setbits(arr[i])==4)
		{
				printf("%d\n",arr[i]);
		}
	}
	return 0;
}
