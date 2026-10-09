#include<stdio.h>
union sensor
{
	int value;
	float temperature;
};
int main()
{
	union sensor data;
	unsigned char *ptr;
	data.temperature=25.5;
	printf("Temperature:%.2f\n",data.temperature);
	ptr=(unsigned char*)&data;
	printf("Raww Memory:");
	for(int i=0;i<sizeof(data);i++)
	{
		printf("%02x",ptr[i]);
	}
	return 0;
}
