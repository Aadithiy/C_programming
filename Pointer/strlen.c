#include<stdio.h>
int main()
{
	int len=0;
	char *ptr;
	char str[100];
	printf("Enter the String:");
	scanf("%99s",str);
	ptr=str;
	while(*ptr != '\0')
	{
		len++;
		*ptr++;
	}
	printf("Length of String:%d\n",len);
	return 0;
}
