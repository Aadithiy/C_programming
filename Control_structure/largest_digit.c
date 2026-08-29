#include <stdio.h>
int main()
{
	int n,digit=0,largest=0;
	printf("Enter the digits:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		if(digit>largest)
		{
			largest=digit;
		}
		n=n/10;
	}
	printf("The largest number is %d:",largest);
}

