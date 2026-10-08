#include<stdio.h>
union address
{
	int pincode;
};
struct student
{
	int id;
	union address Pincode;
};
int main()
{
	struct student s;
	printf("Enter the ID:");
	scanf("%d",&s.id);
	printf("Enter the Pincode:");
	scanf("%d",&s.Pincode.pincode);
	printf("ID:%d\n",s.id);
	printf("Pincode:%d\n",s.Pincode.pincode);
	return 0;
}
