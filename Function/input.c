#include <stdio.h>
void inputarray(int arr[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("Enter the elements:");
		scanf("%d",&arr[i]);
	}
}
int main()
{
	int arr[100];
	int i,n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	inputarray(arr,n);
	printf("Elements in Array");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

