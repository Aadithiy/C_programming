#include <stdio.h>
void calculate(int a, int b, int *sum, int *diff)
{
	*sum = a + b;
	*diff = a - b;
}
int main()
{
	int a = 20, b = 10;
	int sum, diff;calculate(a, b, &sum, &diff);
	printf("Sum = %d\n", sum);
	printf("Difference = %d\n", diff);
	return 0;
}

