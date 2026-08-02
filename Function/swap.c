#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside swap() function:\n");
    printf("a = %d, b = %d\n", a, b);
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore calling swap():\n");
    printf("x = %d, y = %d\n", x, y);

    swap(x, y);

    printf("\nAfter calling swap():\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
