#include <stdio.h>

typedef unsigned short u16;
typedef unsigned int   u32;
typedef unsigned long  u64;

int main()
{
    u16 a = 65535;
    u32 b = 4000000000U;
    u64 c = 10000000000UL;

    printf("Size of u16 = %zu bytes\n", sizeof(u16));
    printf("u16 value = %u\n", a);

    printf("Size of u32 = %zu bytes\n", sizeof(u32));
    printf("u32 value = %u\n", b);

    printf("Size of u64 = %zu bytes\n", sizeof(u64));
    printf("u64 value = %lu\n", c);

    return 0;
}

