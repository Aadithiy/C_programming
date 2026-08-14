#include <stdio.h>
void fabonacii(int n)
{
	int a=0,b=1,c;
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}
int main()
{
	int a;
	printf("Enter the N number:");
	scanf("%d",&a);
	fabonacii(a);
	return 0;
}

