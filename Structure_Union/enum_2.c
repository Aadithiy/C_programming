#include <stdio.h>

enum Signal
{
    RED = 1,
    YELLOW,
    GREEN
};

int main()
{
    int choice;
    enum Signal signal;

    printf("Enter signal:\n");
    printf("1. RED\n");
    printf("2. YELLOW\n");
    printf("3. GREEN\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    signal = choice;

    if (signal == RED)
        printf("STOP\n");
    else if (signal == YELLOW)
        printf("WAIT\n");
    else if (signal == GREEN)
        printf("GO\n");
    else
        printf("Invalid signal\n");

    return 0;
}
