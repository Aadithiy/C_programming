#include<stdio.h>
struct address
{
	char city[20];
	char state[20];
	int pincode;
};
struct student
{
	int id;
	char name[20];
	float marks;
	struct address Address;
};
int main()
{
	struct student s;
	printf("Enter the following Details:");
	printf("ID,Name,Marks:\n");
	scanf("%d %19s %f",&s.id,s.name,&s.marks);
	printf("City , State ,Pincode:\n");
	scanf("%19s %19s %d",s.Address.city,s.Address.state,&s.Address.pincode);
	printf("Student Details\n");
	printf("\n");
	printf("ID:%d\nName:%s\nMarks:%.2f\n",s.id,s.name,s.marks);
	printf("\n");
	printf("Address Details\n");
	printf("\n");
	printf("City:%s\nState:%s\nPincode:%d\n",s.Address.city,s.Address.state,s.Address.pincode);
	return 0;
}
