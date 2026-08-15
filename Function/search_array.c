#include<stdio.h>
int search(int arr[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if (arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[100],i,key,index,n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&key);
	index=search(arr,n,key);
	if(index!=-1)
	{
		printf("The index of the element is %d",index);
	}
	else
	{
		printf("Element is not found %d",index);
	}
	return 0;
}
