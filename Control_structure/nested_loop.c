#include <stdio.h>
int main()
{
	int i,j,n,flag;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			printf("Not a prime\n");
			continue;
		}
		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j !=0)
			{
				continue;
			}
			else
			{
				flag=1;
				printf("Not a prime\n");
				break;
			}
		}
		if(flag==0)
		{
			printf("It is prime\n");
		}
	}
}
