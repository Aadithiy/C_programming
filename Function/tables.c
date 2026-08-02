#include <stdio.h>
void tables(int a)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",a,i,a*i);
	}
}
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("\nMultipication table of %d:\n",a);
	tables(a);
	return 0;
}


