#include<stdio.h>
#include<string.h>
int isAnagram(char str1[],char str2[])
{
	int i,j,found=0;
	if(strlen(str1)!=strlen(str2))
	{
		printf("not Anagram\n");
		return 0;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		found=0;
		for(j=0;str2[j];j++)
		{
			if(str1[i]==str2[j])
			{
				str2[j]='*';
				found=1;
				break;
			}
		}
		if(found==0)
		{
			printf("Not Anagram\n");
			return 0;
		}
	}
	printf("Anagram\n");
	return 0;
}
int main()
{
	char a[100],b[100];
	printf("Enter the String1:");
	scanf("%99s",a);
	printf("Enter the String2:");
	scanf("%99s",b);
	isAnagram(a,b);
	return 0;
}
