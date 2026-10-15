#include<stdio.h>
void reference(int *a)
{
	(*a)++;
}
int main()
{
	int a=10;
	reference(&a);
	printf("After one Cycle:%d\n",a);
	reference(&a);
	printf("After Second Cycle:%d\n",a);
	return 0;
}
