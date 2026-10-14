#include <stdio.h>
int main() 
{
	int *ptr = NULL;
	printf("The value of ptr is: %p\n", ptr);
	if (ptr) 
	{
		printf("Pointer is not null.\n");
	} 
	else 
	{
		printf("Pointer is null.\n");
	}
	return 0;
}
