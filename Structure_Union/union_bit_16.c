#include <stdio.h>
union Data
{
    unsigned short value;
    struct
    {
        unsigned char low;
        unsigned char high;
    } byte;
};
int main()
{
    union Data d;
    d.value = 0x1234;
    printf("16-bit Value = 0x%04X\n", d.value);
    printf("Low Byte     = 0x%02X\n", d.byte.low);
    printf("High Byte    = 0x%02X\n", d.byte.high);
    return 0;
}

