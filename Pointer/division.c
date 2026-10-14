#include <stdio.h>
void calculate(int a, int b, int *quotient, int *remainder)
{
	*quotient = a / b;
	*remainder = a % b;
}
int main()
{
	int a, b, quotient, remainder;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	if (b == 0)
	{
		printf("Division by zero is not allowed.\n");
		return 1;
	}
	calculate(a, b, &quotient, &remainder);
	printf("Quotient = %d\n", quotient);
	printf("Remainder = %d\n", remainder);
	return 0;
}
