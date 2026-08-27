#include<stdio.h>
int main()
{
	int balance,withdrawal;
	printf("Enter the balance and withdrawal amount:");
	scanf("%d %d",&balance,&withdrawal);
	if(balance>withdrawal&&withdrawal%100==0)
	{
		balance-=withdrawal;
		printf("Withdrawal successful. Remaining balance =%d",balance);
	}
	else if(balance<withdrawal)
	{
		printf("Error : Insufficient balance");
	}
	else
	{
		printf("Error : Amount must be a multiple of 100");
	}
	return 0;
}

