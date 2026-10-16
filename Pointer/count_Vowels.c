#include<stdio.h>
int main()
{
	char str[100];
	char *ptr;
	int count=0;
	printf("Enter the String:");
	scanf("%99s",str);
	ptr=str;
	while(*ptr!='\0')
	{
		if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
		{
			count++;
		}
		ptr++;
	}
	printf("Count of Vowels in this String :%d\n",count);
	return 0;
}
