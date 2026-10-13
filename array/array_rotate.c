#include<stdio.h>
void rotateRight(int arr[],int n,int k)
{
	int i,temp,j;
	k=k%n;
	for(i=0;i<k;i++)
	{
		temp=arr[n-1];
		for(j=n-1;j>0;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[j]=temp;
	}


}
int main()
{
	int n,k,i,arr[100];
	printf("Enter the Number of Elements:");
	scanf("%d",&n);
	printf("Enter the Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the Number of Rotate:");
	scanf("%d",&k);
	rotateRight(arr,n,k);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
		
