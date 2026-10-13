#include<stdio.h>
unsigned int configureoutput(unsigned int reg,int pin)
{
	int shift;
	if((pin<0)||(pin>15))
	{
		return reg;
	}
	shift=2*pin;
	reg = reg & ~(3U<<shift);
	reg = reg | (1U<<shift);
	return reg;
}
int main()
{
	unsigned int reg;
	int pin;
	printf("Enter the Original Values Of Register in Hexadecimal:");
	scanf("%x",&reg);
	printf("Enter The Pin(0-15):");
	scanf("%d",&pin);
	reg = configureoutput(reg,pin);
	printf("The Updated Register : 0x%08X",reg);
	return 0;
}
