#include<stdio.h>
typedef struct
{
	char name[50];
	int roll_no;
	float marks;
}student;
int main()
{
	student s[5];
	int i,topper=0;
	for(i=0;i<5;i++)
	{
		printf("\n Enter details of Students %d\n",i+1);
		printf("Name:");
		scanf(" %[^\n]",s[i].name);
		printf("Roll.no:");
		scanf("%d",&s[i].roll_no);
		printf("Marks:");
		scanf("%f",&s[i].marks);
	}
	for(i=0;i<5;i++)
	{
		if (s[i].marks>s[topper].marks)
		{
			topper=i;
		}
	}
	printf("\n--- Topper Details ---\n");
	printf("Name:%s\n",s[topper].name);
	printf("Roll.no:%d\n",s[topper].roll_no);
	printf("Marks:%f\n",s[topper].marks);
	return 0;
}

