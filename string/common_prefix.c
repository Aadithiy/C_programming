#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,min,flag=1;
	char str[100][100];
	printf("Enter the Number of string:");
	scanf("%d",&n);
	printf("Enter the String:");
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	min=strlen(str[0]);
	for(i=1;i<n;i++)
	{
		if(strlen(str[i])>min)
		{
				min=strlen(str[i]);
		}
	}
	for(i=0;i<min;i++)
	{
	          for(j=0;j<n;j++)
	          { 
                            if(str[0][i]!=str[j][i])
			    {
			              flag=0;
				      break;
		            }
		  }
		  if(flag==0)
		  {
			  break;
		  }
	}
	if(i==0)
	{
	     printf("-1");
	}
	else
	{
		printf("Common Prefix:");
		for(j=0;j<i;j++)
		{
			printf("%c",str[0][j]);
		}
	}
	return 0;
}

