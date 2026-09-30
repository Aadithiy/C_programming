#include <stdio.h>

typedef struct
{
    int roll_no;
    char name[20];
    float marks;
} Student;

int main()
{
    Student s1;

    s1.roll_no = 101;
    s1.marks = 85.5;

    printf("Roll No: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
