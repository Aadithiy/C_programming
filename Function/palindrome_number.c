#include <stdio.h>
int reversenumber(int a)
{
	int reverse=0;
	while(a>0)
	{
		reverse=reverse*10+(a%10);
		a=a/10;
	}
	return reverse;
}
int palindrome(int a)
{
	if(a == reversenumber(a))

		return 1;
	else 
		return 0;
	
}
int main()
{
	int a;
	printf("Enter the numbers:");
	scanf("%d",&a);
        if(palindrome(a))
             printf("%d is a Palindrome number.", a);
        else
             printf("%d is not a Palindrome number.", a);
        return 0;
}

