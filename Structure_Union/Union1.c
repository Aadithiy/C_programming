#include<stdio.h>
union student
{
	int id;
	char name[50];
	float marks;
};
int main()
{
	union student s;
	printf("Enter the ID:");
	scanf("%d",&s.id);
	printf("ID:%d\n",s.id);
	printf("Enter the Name:");
	scanf("%s",s.name);
	printf("Name:%s\n",s.name);
	printf("Enter the Marks:");
	scanf("%f",&s.marks);
	printf("Marks:%.2f\n",s.marks);
	printf("Sizeof:%ld\n",sizeof(s));
	return 0;
}
