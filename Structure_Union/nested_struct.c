#include <stdio.h>

typedef struct
{
    char city[30];
    int pincode;
} Address;

typedef struct
{
    char name[50];
    int roll_no;
    float marks;
    Address address;
} Student;

int main()
{
    Student s;

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Enter city: ");
    scanf(" %[^\n]", s.address.city);

    printf("Enter pincode: ");
    scanf("%d", &s.address.pincode);

    printf("\n--- Student Details ---\n");
    printf("Name     : %s\n", s.name);
    printf("Roll No  : %d\n", s.roll_no);
    printf("Marks    : %.2f\n", s.marks);
    printf("City     : %s\n", s.address.city);
    printf("Pincode  : %d\n", s.address.pincode);

    return 0;
}
