#include<stdio.h>
#include<string.h>
typedef enum
{
	RED,
	GREEN,
	YELLOW,
}signal;
typedef struct
{
	signal colour;
	int duration;
}traffic;
signal nextsignal(signal current)
{
	switch(current)
	{
		case RED:
			return GREEN;
			break;
		case GREEN:
			return YELLOW;
			break;
		case YELLOW:
			return RED;
			break;
		default:
			return RED;
	}
}
const char *signalname(signal s)
{
	switch(s)
	{
		case RED:
			return "RED";
		case YELLOW:
			return "YELLOW";
		case GREEN:
			return "GREEN";
		default:
			return "Invalid";
	}
}
int main()
{
	int input,duration;
	traffic t;
	printf("Enter 0:RED\t 1:GREEN\t 2:YELLOW\t");
	scanf("%d",&input);
	printf("Enter the  Duration:");
	scanf("%d",&duration);
	if(input == RED)
	{
		t.colour=RED;
	}
	else if(input == GREEN)
	{
		t.colour = GREEN;
	}
	else if(input == YELLOW)
	{
		t.colour = YELLOW;
	}
	else
	{
		printf("Invalid Option\n");
		return 1;
	}
	printf("Current:%s -> Next:%s\n",signalname(t.colour),signalname(nextsignal(t.colour)));
	return 0;
}
