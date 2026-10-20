#include<stdio.h>
typedef void(*commandhandler)(void);
void ledon (void)
{
	printf("Led ON\n");
}
void ledoff (void)
{
	printf("Led OFF\n");
}
void reset (void)
{
	printf("Reset\n");
}
void status (void)
{
	printf("Status\n");
}
void dispatch(commandhandler table[],int table_size,int cmdid)
{
	if(cmdid>=0&&cmdid<table_size)
	{
		table[cmdid]();
	}
	else
	{
		printf("Invalid Command\n");
	}
}
int main()
{
	commandhandler table[] = {ledon,ledoff,reset,status};
	int cmdid;
	printf("0.Led ON\n");
	printf("1.Led Off\n");
	printf("2.Reset\n");
	printf("3.Status\n");
	printf("Enter the Command ID:");
	scanf("%d",&cmdid);
	dispatch(table,4,cmdid);
	return 0;
}
