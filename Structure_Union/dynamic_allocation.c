#include<stdio.h>
#include<stdlib.h>
struct student
{
	int marks;
	int roll;
};
struct student* createstruct(int marks,int roll)
{
	struct student *s=(struct student*)malloc(sizeof(struct student));
	s->roll=roll;
	s->marks=marks;
	return s;
}
int main()
{
	struct student *s=createstruct(95,22);
	printf("Roll No.%d , Marks:%d",s->roll,s->marks);
	free(s);
	return 0;
}

