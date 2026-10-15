#include<stdio.h>
int  max(int arr[],int size)
{
	int max=arr[0];
	for(int i=1;i<size;i++)
	{
		if(*(arr+i)>max)
		{
			max=*(arr+i);
		}
	}
	return max;
}
int main()
{
	int arr[]={10,24,35,23,25};
	int size = sizeof arr/sizeof arr[0];
	int maxi=max(arr,size);
	printf("The maximum Values:%d",maxi);
	return 0;
}
