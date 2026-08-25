#include <stdio.h>
int isPalindrome(int n)
{
    int original = n;
    int rev = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return original == rev;
}
int main()
{
    int n, i,arr[100];
    printf("Enter the nmber of element");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if (!isPalindrome(arr[i]))
        {
            printf("First Non-Palindrome = %d",arr[i]);
        }
    }
    return 0;
}
