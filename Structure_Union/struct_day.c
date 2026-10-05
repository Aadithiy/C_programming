#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct Date d;
    printf("Enter day: ");
    scanf("%d", &d.day);
    printf("Enter month: ");
    scanf("%d", &d.month);
    printf("Enter year: ");
    scanf("%d", &d.year);
    printf("\nDate = %02d/%02d/%04d\n", d.day, d.month, d.year);
    return 0;
}
