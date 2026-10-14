#include <stdio.h>
int main()
{
	int *ptr;
	printf("Pointer declared but not initialized.\n");
	printf("%d", *ptr);
	return 0;
}

