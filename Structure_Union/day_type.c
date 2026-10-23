#include<stdio.h>
typedef enum{
	sunday,
	monday,
	tuesday,
	wednesday,
	thusday,
	friday,
	saturday
}day;
void checkday(day d)
{
	if(d == sunday || d == saturday)
	{
		printf("Weekend\n");
	}
	else
	{
		printf("Weekday\n");
	}
}
int main()
{
	int input;
	printf("Enter Number Between 0 to 6:");
	scanf("%d",&input);
	if(input>6 || input <0)
	{
		printf("Invalid Input\n");
	}
	checkday(input);
	return 0;
}


