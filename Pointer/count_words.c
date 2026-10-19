#include<stdio.h>
int main()
{
	char str[100];
	int words=0;
	printf("Enter the String:");
	fgets(str,sizeof(str),stdin);
	char *ptr = str;
	while(*ptr != '\0')
	{
		if(*ptr != ' ' && (ptr == str || *(ptr - 1) == ' '))
		{
			words++;
		}
		ptr++;
	}
	printf("Number of Words are:%d\n",words);
	return 0;
}
