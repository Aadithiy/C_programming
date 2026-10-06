#include<stdio.h>
struct Address
{
	char city[50];
	int pincode;
};
struct student
{
	int id;
	char name[50];
	struct Address address;
};
int main()
{
	struct student s;
	printf("Enter the ID:");
	scanf("%d",&s.id);
	printf("Enter Name:");
	scanf("%s",s.name);
	printf("Enter the City :");
	scanf("%s",s.address.city);
	printf("Enter the Pincode:");
	scanf("%d",&s.address.pincode);
	printf("\n---Student Details---\n");
	printf("ID:%d\n",s.id);
	printf("Name:%s\n",s.name);
	printf("City:%s\n",s.address.city);
	printf("Pincode:%d\n",s.address.pincode);
	return 0;
}
