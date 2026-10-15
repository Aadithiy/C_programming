#include<stdio.h>
void reverse(int n,int *rev)
{
	*rev=0;
	while(n>0)
	{
		*rev=*rev*10+n%10;
		n=n/10;
	}
}
int main()
{
	int n=1234;
	int rev;
	printf("Before Reverse:%d\n",n);
	reverse(n,&rev);
	printf("After Reverse:%d\n",rev);
	return 0;
}

