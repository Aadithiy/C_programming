#include <stdio.h>

int main() {
    int num, count = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the case when the number is 0
    if (num == 0) {
        count = 1;
    } else {
        // Count digits
        while (num != 0) {
            count++;
            num = num / 10;
        }
    }

    // Output
    printf("Number of digits = %d\n", count);

    return 0;
}
