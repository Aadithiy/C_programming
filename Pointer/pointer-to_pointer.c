#include <stdio.h>
int main()
{
	int num = 10;
	int *ptr = &num;
	int **pptr = &ptr;
	printf("Value of num: %d\n", num);
	printf("Value using pointer: %d\n", *ptr);
	printf("Value using pointer to pointer: %d\n", **pptr);
	return 0;

}

