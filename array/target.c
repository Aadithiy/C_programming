#include<stdio.h>
int main()
{
	int i,j,n,t;
	printf("Enter the Number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the target Value:");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(t==arr[i]+arr[j])
			{
				printf("%d %d\n",i,j);
			}
		}
	}
	return 0;
}
