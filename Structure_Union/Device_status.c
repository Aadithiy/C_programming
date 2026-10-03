#include<stdio.h>
enum Status
{
	off,
	on
};
struct device
{
	int device_id;
	enum Status status;
};
int main()
{
	struct device d;
	printf("Enter the Device ID:");
	scanf("%d",&d.device_id);
	printf("Enter the Status:(ON=1 or OFF=0)\n");
	scanf("%d",(int *)&d.status);
	printf("\n--- Device Details ---\n");
        printf("Device ID : %d\n", d.device_id);
	if(d.status == on)
		printf("Status :ON\n");
	else
		printf("Status :OFF\n");
	return 0;
}
