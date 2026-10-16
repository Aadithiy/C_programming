#include<stdio.h>
struct student{
	int id;
	char name[50];
	float marks;
};
int main()
{
	struct student s1={01,"Rakesh",67};
	struct student s2={02,"Siva",78};
	struct student s3={03,"Sanjay",66};
	struct student *p[3];
	p[0]=&s1;
	p[1]=&s2;
	p[2]=&s3;
	for(int i=0;i<3;i++)
	{
		printf("ID:%d\n",p[i]->id);
		printf("NAME:%s\n",p[i]->name);
		printf("MARKS:%.2f\n",p[i]->marks);
	}
	return 0;
}
