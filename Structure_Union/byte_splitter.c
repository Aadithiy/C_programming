#include<stdio.h>
typedef union
{
	unsigned short word;
	unsigned char bytes[2];
}wordbyte;
void splitter(unsigned short w,unsigned char *lo,unsigned char *hi)
{
	wordbyte data;
	wordbyte test;
	data.word=w;
	test.word=1;
	if(test.bytes[0]==1)
	{
		*lo=data.bytes[0];
		*hi=data.bytes[1];
	}
	else
	{
		*hi=data.bytes[0];
		*lo=data.bytes[1];
	}
}
int main()
{
	unsigned short w;
	unsigned char lo,hi;
	printf("Enter the Hexadecimal Value:");
	scanf("%hx",&w);
	splitter(w,&lo,&hi);
	printf("Lower Bytes:0x%02X\n",(unsigned)lo);
	printf("Higher Bytes:0x%02X\n",(unsigned)hi);
	return 0;
}
