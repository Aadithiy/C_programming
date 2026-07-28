#include <stdio.h>

int main() {
    int arr[10];
    int i, largest;

    // Input 10 integers
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    largest = arr[0];

    // Find the largest element
    for (i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Display the largest element
    printf("The largest element is: %d\n", largest);

    return 0;
}
