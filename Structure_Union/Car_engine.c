#include<stdio.h>
struct Engine
{
	int CC;
	int Year;
};
struct Car
{
	char Number[10];
	char car_model[50];
	struct Engine details;
};
int main()
{
	struct Car c;
	printf("Enter the Number:");
	scanf("%s",c.Number);
	printf("Enter Car_Model:");
	scanf("%s",c.car_model);
	printf("Enter the Engine Cubic Capacity :");
	scanf("%d",&c.details.CC);
	printf("Enter the Manufactoring Year:");
	scanf("%d",&c.details.Year);
	printf("\n---Car Details---\n");
	printf("Number:%s\n",c.Number);
	printf("Model:%s\n",c.car_model);
	printf("Engine Cubic Capacity:%d\n",c.details.CC);
	printf("Manufactoring Year:%d\n",c.details.Year);
	return 0;
}
