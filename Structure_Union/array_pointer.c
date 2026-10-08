#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float marks;
};
int main()
{
	struct student s[3] = {
		{101,"Arjun",89.5},{102,"Aravind",76.5},{103,"Rakesh",89}};
	int i;
	struct student *ptr[3];
	for(i=0;i<3;i++)
	{
		ptr[i]=&s[i];
	}
	for(i=0;i<3;i++)
	{
		printf("ID:%d\n",ptr[i]->id);
		printf("Name:%s\n",ptr[i]->name);
		printf("Marks:%.2f\n",ptr[i]->marks);
	}
	return 0;
}
