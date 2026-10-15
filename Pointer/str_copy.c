#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	char *p1,*p2;
	printf("Enter a String:");
	scanf("%99s",str1);
	p1 = str1;
	p2 = str2;
	while(*p1 != '\0')
	{
		*p2 = *p1;
		p1++;
		p2++;
	}
	*p2 = '\0';
	printf("Original String:%s\n",str1);
	printf("Copied String:%s\n",str2);
	return 0;
}
