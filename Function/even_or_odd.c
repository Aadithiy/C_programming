#include <stdio.h>
int even(int a)
{
	if (a%2==0)
	{
		return 1;
	}
	else
	{
		return 0;}
}
int main()
{
	int a,b;
	printf("Enter a number:");
	scanf("%d",&a);
	b=even(a);
	printf("%d",b);
	return 0;
}


