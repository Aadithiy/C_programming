#include<stdio.h>
void decimaltobinary(int n)
{
	int rem,place=1,bin=0;
	while(n>0)
	{
		rem=n%2;
		bin = bin + rem * place;
		place = place * 10;
		n = n/2;
	}
	printf("Binary:%d",bin);
}
void decimaltooctal(int n)
{
	int rem=0,place=1,Oin=0;
	while(n>0)
	{
		rem=n%8;
		Oin=Oin+rem*place;
		place=place*10;
		n=n/8;
	}
	printf("\nOctal:%d",Oin);
}
void decimaltoHex(int n)
{
	int rem=0 ,i=0;
	char hex[20];
	while(n>0)
	{
		rem=n%16;
		if(rem<10)
		{
			hex[i]=rem+'0';
		}
		else
		{
			hex[i]=rem-10+'A';
		}
	i++;
	n=n/16;
	}
	printf("\nHexadecimal:");
	while(i>0)
	{
		printf("%c",hex[--i]);
	}
}
int main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	decimaltobinary(n);
	decimaltooctal(n);
	decimaltoHex(n);
	return 0;
}
