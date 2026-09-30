#include <stdio.h>
typedef int* intptr;
void swap(intptr a,intptr b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int x,y;
	x=10;
	y=20;
	printf("Before swapping:X=%d,Y=%d\n",x,y);
	swap(&x,&y);
	printf("After swapping:X=%d,Y=%d\n",x,y);
	return 0;
}
