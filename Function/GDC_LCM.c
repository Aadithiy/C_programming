#include<stdio.h>
int findGCD(int a,int b)
{
	int temp;
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int findLCM(int a,int b)
{
	int lcm;
	lcm = (a*b)/(findGCD(a,b));
	return lcm;
}
int main()
{
	int a,b,GCD,LCM;
	printf("Enter the First Value:");
	scanf("%d",&a);
	printf("Enter the Second Value:");
	scanf("%d",&b);
	GCD = findGCD(a,b);
	LCM = findLCM(a,b);
	printf("GCD:%d\n",GCD);
	printf("LCM:%d\n",LCM);
	return 0;
}
