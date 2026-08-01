#include <stdio.h>
int square(int a)
{
	return a*a;
}
int main()
{
	int a,s;
	printf("Enter the number:");
	scanf("%d",&a);
	s=square(a);
	printf("The square of %d is:%d",a,s);
	return 0;
}

