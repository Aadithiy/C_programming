#include<stdio.h>
void str_copy(char dest[],char scr[])
{
	int i=0;
	while(scr[i]!='\0')
	{
		dest[i]=scr[i];
		i++;
	}
	dest[i]='\0';
}
int main()
{
	char str1[100],str2[100];
	printf("Enter the string:");
	scanf("%s",str1);
	str_copy(str2,str1);
	printf("The original string:%s\n",str1);
	printf("The copied string :%s\n",str2);
	return 0;
}
