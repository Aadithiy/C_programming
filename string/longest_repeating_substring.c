#include <stdio.h>
int main()
{
	char str[100];
	int i , count=1 , max=1 ;
	char maxchar=str[0];
	printf("Enter the string:");
	scanf("%s",str);
	for(i=1;str[i]!='\0';i++)
	{
		if(str[i]==str[i-1])
		{
			count++;
			if(count>max)
			{
				max=count;
				maxchar=str[i];
			}
		}
		else
		{
			count=1;
		}
	}
	printf("Longest repeating substring:");
	for(i=0;i<max;i++)
	{
		printf("%c",maxchar);
	}
	printf("\nLength of string:%d",max);
}
