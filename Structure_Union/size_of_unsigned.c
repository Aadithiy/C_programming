#include <stdio.h>

typedef unsigned char u8;

int main()
{
    u8 age = 25;
    u8 value = 200;

    printf("Size of u8 = %zu byte\n", sizeof(u8));
    printf("Age = %u\n", age);
    printf("Value = %u\n", value);

    return 0;
}
