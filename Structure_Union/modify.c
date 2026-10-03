#include<stdio.h>
typedef struct
{
	char name[50];
	int roll_no;
	float marks;
}student;
void modify(student *s)
{
	s->roll_no = 33;
	s->marks = 95.0;
}
int main()
{
	student s;
	printf("Enter Name :");
	scanf(" %[^\n]", s.name);
	printf("Enter the roll.no:");
	scanf("%d",&s.roll_no);
	printf("Enter the Marks:");
	scanf("%f",&s.marks);
	printf("\n ---Before Modification---\n");
	printf("Name:%s\n",s.name);
	printf("Roll.no:%d\n",s.roll_no);
	printf("Marks:%.2f\n",s.marks);
	modify(&s);
	printf("\n---After Modification---\n");
	printf("Name:%s\n",s.name);
	printf("Roll.no:%d\n",s.roll_no);
	printf("Marks:%.2f\n",s.marks);
	return 0;
}

