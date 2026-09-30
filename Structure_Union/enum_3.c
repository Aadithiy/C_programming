#include <stdio.h>

enum Status
{
    START = 10,
    STOP = 20,
    PAUSE = 30
};

int main()
{
    printf("START = %d\n", START);
    printf("STOP = %d\n", STOP);
    printf("PAUSE = %d\n", PAUSE);

    return 0;
}
