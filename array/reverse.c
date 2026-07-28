#include <stdio.h>
int main(){
	int i,n,arr[10];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
        for(i=0;i<n;i++){
	scanf("%d", &arr[i]);
	}
        printf("Reversed value:");
        for(i=n-1;i>=0;i--){
	printf("%d",arr[i]);
        }
return 0;
}
