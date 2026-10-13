#include<stdio.h>
int main()
{
	int i,j,count,found=0;
	char str[100];
	printf("Enter the String:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		count=0;
		for(j=0;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("First non repeating String:%c\n",str[i]);
			found=1;
			break;
		}
	}
		if(found==0)
		{
			printf("-1\n");
		}
	return 0;
}
