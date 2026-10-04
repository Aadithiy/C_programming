#include<stdio.h>
enum Unit
{
	temp,
	pressure,
	humidity
};
struct sensor
{
	float value;
	enum Unit unit;
};
int main()
{
	struct sensor s;
	int choice;
	printf("Enter the value of sensor:");
	scanf("%f",&s.value);
	printf("Enter the Unit (Temperature = 0 :Pressure = 1 :Humidity = 2):");
	scanf("%d",&choice);
	s.unit = choice;
	printf("\n---Sensor Details---\n");
	printf("Sensor Value = %.2f",s.value);
	printf("Unit :");
	switch (s.unit)
	{
		case temp:
			printf("Temp\n");
			break;
		case pressure:
			printf("Pressure\n");
			break;
		case humidity:
			printf("Humidity\n");
			break;
		default:
			printf("Invalid Unit\n");
			break;
	}
	return 0;
}
