#include <stdio.h>

// Function to reverse a number
int reverseNumber(int n)
{
    int reverse = 0;

    while(n > 0)
    {
        reverse = reverse * 10 + (n % 10);
        n = n / 10;
    }

    return reverse;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d", reverseNumber(num));

    return 0;
}
