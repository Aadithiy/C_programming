#include <stdio.h>
union Data
{
    int i;
    float f;
    char c;
};
int main()
{
    union Data d;
    d.i = 65;
    printf("After storing integer:\n");
    printf("i = %d\n", d.i);
    d.f = 12.5;
    printf("\nAfter storing float:\n");
    printf("f = %.2f\n", d.f);
    d.c = 'A';
    printf("\nAfter storing character:\n");
    printf("c = %c\n", d.c);
    printf("\nSize of union = %zu bytes\n", sizeof(d));
    return 0;
}
