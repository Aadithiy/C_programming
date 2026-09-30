#include <stdio.h>

enum ErrorCode
{
    SUCCESS = 0,
    FILE_ERROR = 1,
    MEMORY_ERROR = 2,
    INVALID_INPUT = 3
};

int main()
{
    enum ErrorCode error = MEMORY_ERROR;

    switch (error)
    {
        case SUCCESS:
            printf("No error\n");
            break;

        case FILE_ERROR:
            printf("File error occurred\n");
            break;

        case MEMORY_ERROR:
            printf("Memory error occurred\n");
            break;

        case INVALID_INPUT:
            printf("Invalid input\n");
            break;

        default:
            printf("Unknown error\n");
    }

    return 0;
}
