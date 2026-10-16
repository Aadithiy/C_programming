#include<stdio.h>
struct student
{
	int roll_no;
	char name[50];
	float marks;
};
int main()
{
	struct student s = {111,"Siva",77.5};
	struct student *p = &s;
	printf("Roll.no:%d\n",p->roll_no);
	printf("Name:%s\n",p->name);
	printf("Marks:%.2f\n",p->marks);
	return 0;
}
