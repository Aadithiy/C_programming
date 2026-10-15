#include<stdio.h>
int main()
{
	int arr[3]={10,20,30};
	int *p = arr;
	printf("Initial Stage:%d\n",*p);
	p++;
	printf("After p++:%d\n",*p);
	(*p)++;
	printf("After (*p)++:%d\n",*p);
	return 0;
}
