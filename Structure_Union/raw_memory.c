#include <stdio.h>
union Data
{
    unsigned int value;
    float f;
    char c;
};
int main()
{
    union Data d;
    unsigned char *ptr;
    int i;
    d.value = 0x12345678;
    ptr = (unsigned char *)&d;
    printf("Union value = 0x%X\n", d.value);
    printf("Raw memory bytes:\n");
    for (i = 0; i < sizeof(d); i++)
    {
        printf("Byte %d = 0x%02X\n", i, ptr[i]);
    }
    return 0;
}

