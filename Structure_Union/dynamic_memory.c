#include<stdio.h>
#include<stdlib.h>
struct student
{
	int id;
	float marks;
};
struct student* createstudent(int id,float marks)
{
	struct student *s = (struct student*)malloc(sizeof(struct student));
	s->id=id;
	s->marks=marks;
	return s;
}
int main()
{
	struct student *s=createstudent(101,89.5);
	printf("ID:%d,Marks:%.2f\n",s->id,s->marks);
	free(s);
	return 0;
}
