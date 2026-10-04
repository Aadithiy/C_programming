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
    printf("Size of union = %zu bytes\n", sizeof(d));
    d.i = 100;
    printf("\nAfter storing int:\n");
    printf("i = %d\n", d.i);
    d.f = 25.5;
    printf("\nAfter storing float:\n");
    printf("f = %.2f\n", d.f);
    d.c = 'A';
    printf("\nAfter storing char:\n");
    printf("c = %c\n", d.c);
    return 0;
}
