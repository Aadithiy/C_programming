#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	a=10;
	b=20;
	printf("Before Swapping:A=%d,B=%d\n",a,b);
	swap(&a,&b);
	printf("After Swapping:A=%d,B=%d\n",a,b);
	return 0;
}
