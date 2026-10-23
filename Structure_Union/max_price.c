#include<stdio.h>
typedef struct {
    char  name[20];
    float price;
    int   qty;
} Product;

int findMostExpensive(Product arr[], int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	{
		if(arr[i].price>arr[max].price)
		{
			max=i;
		}
	}
	return max;
}
int main()
{
	Product arr[10];
	int i,ind;
	printf("Enter the details\n");
	for(i=0;i<3;i++)
	{
		printf("Enter the Product %d",i+1);
		printf("Name:");
		scanf("%19s",arr[i].name);
		printf("Price:");
		scanf("%f",&arr[i].price);
		printf("Enter the Quantity:");
		scanf("%d",&arr[i].qty);
	}
	ind = findMostExpensive(arr,3);
	printf("Maximum Amount :%.2f\n",arr[ind].price);
	return 0;
}
