#include <stdio.h>
union Data
{
    int i;
    float f;
    char c;
};
struct Device
{
    int id;
    char type;
    union Data data;
};
int main()
{
    struct Device d;
    d.id = 101;
    d.type = 'A';
    d.data.i = 100;
    printf("--- Device Details ---\n");
    printf("ID          : %d\n", d.id);
    printf("Type        : %c\n", d.type);
    printf("Integer Data: %d\n", d.data.i);
    d.data.f = 25.5;
    printf("Float Data  : %.2f\n", d.data.f);
    d.data.c = 'X';
    printf("Char Data   : %c\n", d.data.c);
    return 0;
}

