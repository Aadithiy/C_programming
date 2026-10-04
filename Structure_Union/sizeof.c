#include <stdio.h>
struct Data
{
    int i;
    float f;
    char c;
};
union DataUnion
{
    int i;
    float f;
    char c;
};
int main()
{
    struct Data s;
    union DataUnion u;
    printf("Size of structure = %zu bytes\n", sizeof(s));
    printf("Size of union     = %zu bytes\n", sizeof(u));
    return 0;
}
