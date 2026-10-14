#include<stdio.h>
int main()
{
	int x,*ptr;
	ptr=&x;
	*ptr=10;
	printf("The Value of X:%d\n",x);
	return 0;
}
