#include<stdio.h>
struct bank
{
	int account_no;
	char name[50];
	int balance;
};
void deposit(struct bank *a)
{
	float amount;
	printf("Enter the Amount:");
	scanf("%f",&amount);
	if(amount<=0)
	{
		printf("Invalid amount\n");
	}
	else
	{
		a->balance+=amount;
		printf("The amount is Deposited Successfully\n");
	}
}
void withdraw(struct bank *a)
{
	float amount;
	printf("Enter the amount:");
	scanf("%f",&amount);
	if(amount <=0)
	{
		printf("Inalid Amount\n");
	}
	else if(amount > a->balance)
	{
		printf("Insufficiant balance\n");
	}
	else
	{
		a->balance -= amount;
		printf("The is Withdrawn Successfully\n");
	}
}
void details(struct bank a)
{
	printf("\n---Account Detail---\n");
	printf("Account Number :%d\n",a.account_no);
	printf("Account Name:%s\n",a.name);
	printf("Balance:%d\n",a.balance);
}
int main()
{
	 struct bank a;
	 int choice;
	 printf("Enter the Acount Number:");
	 scanf("%d",&a.account_no);
	 printf("Enter the Name:");
	 scanf("%s",a.name);
	 printf("Enter the balance amount:");
	 scanf("%d",&a.balance);
	 printf("\n--- Choice ---\n");
	 printf("Check balance = 1\n");
	 printf("Withdraw = 2\n");
	 printf("Deposit = 3\n");
	 printf("Exit = 4\n");
	 printf("Enter your choice");
	 scanf("%d",&choice);
	 switch (choice)
	 {
		 case 1:
			 details(a);
			 break;
		 case 2:
			 withdraw(&a);
			 break;
		 case 3:
			 deposit(&a);
			 break;
		 case 4:
			 printf("Exit\n");
			 break;
		 default:
			 printf("Invalid choice\n");
	 }
	 return 0;
}
