#include<stdio.h>
void print_arr(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d\n",*(arr+i));
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int size=sizeof arr/sizeof arr[0];
	print_arr(arr,size);
	return 0;
}
