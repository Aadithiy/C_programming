#include<stdio.h>
#include<string.h>
void sort(char *word[],int n)
{
	int i,j;
	char *temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(strcmp(word[j],word[j+1])>0)
			{
				temp=word[j];
				word[j]=word[j+1];
				word[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n,i;
	char name[10][50];
	char *word[10];
	printf("Enter the Number of Names:");
	scanf("%d",&n);
	printf("Enter the Names:");
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
		word[i]=name[i];
	}
	sort(word,n);
	for(i=0;i<n;i++)
	{
		printf("%s\n",word[i]);
	}
	return 0;
}
