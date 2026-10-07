#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float marks;
};
void sort(struct student s[],int n)
{
	int i,j;
	struct student temp;
	for (i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].marks<s[j].marks)
			{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			}
		}
	}
}
int main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter the Student ID:");
		scanf("%d",&s[i].id);
		printf("Enter the Student Name:");
		scanf("%s",s[i].name);
		printf("Enter the Mark:");
		scanf("%f",&s[i].marks);
	}
	sort(s,5);
	printf("\n---Sorted Marks---\n");
	for(i=0;i<5;i++)
	{
		printf("\nID:%d\n",s[i].id);
		printf("Name:%s\n",s[i].name);
		printf("Marks:%0.2f\n",s[i].marks);
	}
	return 0;
}
