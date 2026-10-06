#include<stdio.h>
struct DOB
{
	int date;
	int month;
	int year;
};
struct Person
{
	char name[50];
	struct DOB dob;
};
int main()
{
	struct Person p;
	int age;
	int current_date,current_month,current_year;
	printf("Enter the Name:");
	scanf("%s",p.name);
	printf("Enter the Date_of_birth (DD MM YYYY):");
	scanf("%d %d %d",&p.dob.date,&p.dob.month,&p.dob.year);
	printf("Enter the Current Year (DD MM YYYY):");
	scanf("%d %d %d",&current_date,&current_month,&current_year);
	age = current_year - p.dob.year;
	if((current_month<p.dob.month)||((current_month==p.dob.month)&&(current_date<p.dob.date)))
	{
		age--;
	}
	printf("Name:%s\n",p.name);
	printf("Date of Birth :%d / %d / %d\n",p.dob.date,p.dob.month,p.dob.year);
	printf("Age :%d\n",age);
	return 0;
}

