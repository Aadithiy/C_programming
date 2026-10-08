#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float marks;
};
union employee
{
	int ID;
	char NAME[50];
	float SALARY;
};
int main()
{
	struct student s;
	union employee e;
	printf("Size Of Structure:%ld\n",sizeof(s));
	printf("Size Of Union:%ld\n",sizeof(e));
	return 0;
}
