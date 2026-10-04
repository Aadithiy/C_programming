#include <stdio.h>
struct Student
{
    int id;
    char name[50];
    float marks;
};
int main()
{
    struct Student s;
    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Student Marks: ");
    scanf("%f", &s.marks);
    printf("\n--- Student Details ---\n");
    printf("Student ID    : %d\n", s.id);
    printf("Student Name  : %s\n", s.name);
    printf("Student Marks : %.2f\n", s.marks);
    return 0;
}
