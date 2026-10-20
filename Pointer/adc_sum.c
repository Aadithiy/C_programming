#include<stdio.h>
int sum(volatile unsigned int *buf,int n)
{
	int i,sum=0;
	for (i=0;i<n;i++)
	{
		sum+=*(buf+i);
	}
	return sum;
}
int main()
{
	int i,n;
	volatile unsigned int buf[100];
	unsigned int value;
	printf("Enter Number of Elements:");
	scanf("%d",&n);
	printf("Enter the Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&value);
		buf[i]=value;
	}
	printf("Sum:%d\n",sum(buf,n));
	return 0;
}

