#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float marks;
};
void search(struct student s[],int n, int id)
{
	int i,found=0;
	for(i=0;i<n;i++)
	{
		if(s[i].id == id)
		{
			printf("\n---Student Found---\n");
			printf("ID:%d\n",s[i].id);
			printf("Name:%s\n",s[i].name);
			printf("Marks:%.2f\n",s[i].marks);
			found = 1;
			break;
		}
	}
	if(found==0)
	{
		printf("\nStudent is not Found\n");
	}
}
int main()
{
	struct student s[5];
	int i,Search_ID;
	for(i=0;i<5;i++)
	{
		printf("Enter the Id:");
		scanf("%d",&s[i].id);
		printf("Enter the Name:");
		scanf("%s",s[i].name);
		printf("Enter the Marks:");
		scanf("%f",&s[i].marks);
	}
	printf("Enter the ID to Search:");
	scanf("%d",&Search_ID);
	search(s,5,Search_ID);
	return 0;
}
