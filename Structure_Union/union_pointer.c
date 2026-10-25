#include<stdio.h>
union sensor
{
	int id;
	float temp;
};
int main()
{
	union sensor s;
	unsigned char *ptr;
	s.temp = 36.5;
	printf("Temperature:%.2f\n",s.temp);
	ptr = (unsigned char *)&s;
	printf("Raw memory Hex:0x");
	for(int i=0;i<sizeof(s);i++)
	{
		printf("%02X",ptr[i]);
	}
	printf("\n");
	return 0;
}

