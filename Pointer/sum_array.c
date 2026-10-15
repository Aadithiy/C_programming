#include<stdio.h>
int sum(int *arr,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+= *(arr+i);
	}
	return sum;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int size;
	size=sizeof arr/sizeof arr[0];
	printf("Sum of Array:%d\n",sum(arr,size));
	return 0;
}
