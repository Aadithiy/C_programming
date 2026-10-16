#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],temp;
	char *start,*end;
	printf("Enter the string:");
	scanf("%99s",str);
	start=str;
	end=str+strlen(str)-1;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	printf("Reverse String:%s\n",str);
	return 0;
}
