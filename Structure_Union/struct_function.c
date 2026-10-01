#include<stdio.h>
typedef struct
{
	char name[50];
	int roll_no;
	float marks;
}student;
void display(student s)
{
	printf("\n--Student details--\n");
	printf("Name:%s\n",s.name);
	printf("Roll.No:%d\n",s.roll_no);
	printf("Marks:%.2f\n",s.marks);
}
int main()
{
	student s;
	printf("Enter the Student Name:");
	scanf(" %[^\n]",s.name);
	printf("Enter the Roll.no:");
	scanf("%d",&s.roll_no);
	printf("Enter the Marks:");
	scanf("%f",&s.marks);
	display(s);
	return 0;
}
