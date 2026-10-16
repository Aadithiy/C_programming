#include<stdio.h>
int main()
{
	int arr[5]={1,23,45,54,34};
	int *ptr=arr;
	int max,min;
	max = *ptr;
	min = *ptr;
	for(int i=0;i<5;i++)
	{
		if(min>*(ptr+i))
		{
			min=*(ptr+i);
		}
		if(max<*(ptr+i))
		{
			max=*(ptr+i);
		}
	}
	printf("Largest :%d\n Smallest:%d\n",max,min);
	return 0;
}
