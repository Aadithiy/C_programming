#include <stdio.h>
struct Student
{
    int id;
    float marks;
};
void modifyByValue(struct Student s)
{
    s.id = 200;
    s.marks = 95.0;
    printf("\nInside modifyByValue():\n");
    printf("ID    = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
}
void modifyByPointer(struct Student *s)
{
    s->id = 300;
    s->marks = 99.0;
    printf("\nInside modifyByPointer():\n");
    printf("ID    = %d\n", s->id);
    printf("Marks = %.2f\n", s->marks);
}
int main()
{
    struct Student s;
    s.id = 101;
    s.marks = 85.0;
    printf("Original values before function calls:\n");
    printf("ID    = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
    modifyByValue(s);
    printf("\nAfter modifyByValue():\n");
    printf("ID    = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
    modifyByPointer(&s);
    printf("\nAfter modifyByPointer():\n");
    printf("ID    = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
    return 0;
}

