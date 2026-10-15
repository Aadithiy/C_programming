#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	printf("Traversel using *(arr+i):");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",*(arr+i));
	}
	printf("\n");
	printf("Traversel using arr[i]:");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("Traversel using *(i+arr):");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",*(i+arr));
	}
	printf("\n");
	return 0;
}
