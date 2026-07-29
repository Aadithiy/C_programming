#include <stdio.h>
int main(){
	int arr[5],sum=0,i;
	float average;
	printf("Enter the array of numbers :\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		sum +=arr[i];
	}
	average=(float)sum/5;
	printf("sum=%d\n",sum);
	printf("average=%.2f\n",average);
	return 0;
}

