#include <stdio.h>
void input(int arr[],int n)
{
	int i;
	for (i=0,i<n;i++)
	{
		printf("Enter the elements:");
		scanf("%d",&arr[i]);
	}
}
int main()
{
	int arr[100],i,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	input(arr,n);
	printf("The array elements are:");
	for(i=0;i<n;i++)
	
	{
		printf("%d",arr[i]);
	}
	return 0;
}


