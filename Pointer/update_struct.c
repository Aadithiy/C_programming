#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[100];
};
void update(struct student *p)
{
	p->roll=11;
	strcpy(p->name,"siva");
}
int main()
{
	struct student s={111,"Sanjay"};
	printf("Before Update: \nRoll.No:%d\nName:%s\n",s.roll,s.name);
	update(&s);
	printf("After Update: \nRoll.No:%d\nName:%s\n",s.roll,s.name);
	return 0;
}
