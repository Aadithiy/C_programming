#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float marks;
};
int main()
{
	struct student s;
	struct student *ptr;
	printf("Enter the ID:");
	scanf("%d",&s.id);
	printf("Enter the Name:");
	scanf("%s",s.name);
	printf("Enter the Marks:");
	scanf("%f",&s.marks);
	ptr = &s;
	printf("\n---Student Details---\n");
	printf("ID:%d\n",ptr->id);
	printf("Name:%s\n",ptr->name);
	printf("Marks:%.2f\n",ptr->marks);
	return 0;
}

