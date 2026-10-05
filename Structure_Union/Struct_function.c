#include <stdio.h>
struct Student
{
    int id;
    char name[50];
    float marks;
};
void display(struct Student s)
{
    printf("\n===== Student Details =====\n");
    printf("ID    : %d\n", s.id);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
}
int main()
{
    struct Student s;
    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Student Marks: ");
    scanf("%f", &s.marks);
    display(s);
    return 0;
}
