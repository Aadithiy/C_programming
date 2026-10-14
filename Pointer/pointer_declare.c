#include<stdio.h>
int main()
{
	int x;
	x=10;
	int *ptr = &x;
	printf("Value of X:%d\n",x);
	printf("Value of &X:%p\n",&x);
	printf("Value of *ptr:%d\n",*ptr);
	return 0;
}
