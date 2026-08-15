#include<stdio.h>
int palindrome(char str[])
{
	int length =0;
	int i=0;
	while(str[length]!='\0')
	{
		length++;
	}
	for(i=0;i<length/2;i++)
	{
		if(str[i]!=str[length-i-1])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char str[100];
	printf("Enter the string:");
	scanf("%s",str);
	if(palindrome(str))
	{
		printf("It is palindrome");
	}
	else
	{
		printf("It is not palindrome");
	}
	return 0;
}
