#include <stdio.h>

int findMaximum(int arr[], int n)
{
    int max = arr[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[100];
    int n, i, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = findMaximum(arr, n);

    printf("Maximum element = %d", max);

    return 0;
}
