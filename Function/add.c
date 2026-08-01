#include <stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b,c;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	c = add(a,b);
	printf("Sum of two numbers are:%d",c);
	return 0;
}



