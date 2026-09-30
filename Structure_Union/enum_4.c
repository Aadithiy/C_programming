#include <stdio.h>

enum Menu
{
    START = 1,
    STOP,
    PAUSE,
    EXIT
};

int main()
{
    int choice;

    printf("---- MENU ----\n");
    printf("1. START\n");
    printf("2. STOP\n");
    printf("3. PAUSE\n");
    printf("4. EXIT\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case START:
            printf("Program Started\n");
            break;

        case STOP:
            printf("Program Stopped\n");
            break;

        case PAUSE:
            printf("Program Paused\n");
            break;

        case EXIT:
            printf("Exiting Program\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
