#include <stdio.h>
int factorial(int n)
{
    int i;
    int fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        printf("Factorial of %d = %d", num, factorial(num));
    }

    return 0;
}
