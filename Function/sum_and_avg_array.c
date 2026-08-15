#include <stdio.h>
void sumavg(int arr[],int n,int *sum,float *average)
{
	*sum=0;
	for (int i=0;i<n;i++)
	{
		*sum=*sum+arr[i];
	}
		*average=(float)(*sum)/n;
}
int main()
{
	int arr[100],n,sum,i;
	float average;
	printf("Enter number of elements:");
       	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sumavg(arr,n,&sum,&average);
	printf("The sume of array:%d\n",sum);
	printf("The average of array:%.2f\n",average);
	return 0;
}

