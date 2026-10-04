#include <stdio.h>
struct Employee
{
    int id;
    float salary;
    char department[30];
};
int main()
{
    struct Employee emp[5];
    int i, maxIndex = 0;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Enter Department: ");
        scanf("%s", emp[i].department);
    }
    for (i = 1; i < 5; i++)
    {
        if (emp[i].salary > emp[maxIndex].salary)
        {
            maxIndex = i;
        }
    }
    printf("\n===== Employee with Highest Salary =====\n");
    printf("ID         : %d\n", emp[maxIndex].id);
    printf("Salary     : %.2f\n", emp[maxIndex].salary);
    printf("Department : %s\n", emp[maxIndex].department);
    return 0;
}
