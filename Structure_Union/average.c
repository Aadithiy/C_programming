#include <stdio.h>
struct Student
{
    int id;
    char name[50];
    float marks;
};
int main()
{
    struct Student s[5];
    int i;
    float sum = 0, average;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        sum = sum + s[i].marks;
    }
    average = sum / 5;
    printf("\n========== Student Details ==========\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("ID    : %d\n", s[i].id);
        printf("Name  : %s\n", s[i].name);
        printf("Marks : %.2f\n", s[i].marks);
    }
    printf("\nTotal Marks = %.2f\n", sum);
    printf("Average Marks = %.2f\n", average);
    return 0;
}
