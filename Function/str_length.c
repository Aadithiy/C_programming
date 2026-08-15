#include <stdio.h>
int my_strlen(char str[])
{
	int i;
	while(str[i]!='\0')
	{ 
		i++;
	}
	return i;
}
int main()
{
	char str[100];
	printf("Enter a string:");
	scanf("%s",str);
        printf("The length of string is %d",my_strlen(str));
	return 0;
}

