#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float mark;
};
struct student d[2]={{01,"Sanjay",78},{02,"Siva",78}};
int main()
{
	struct student *ptr = d;
	for(int i=0;i<2;i++)
	{
		printf("Id:%d\t Name:%s\t Mark:%.2f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->mark);
	}
	return 0;
}
