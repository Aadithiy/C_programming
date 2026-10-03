#include<stdio.h>
enum device_status
{
	init,
	running,
	error
};
struct device
{
	int device_id;
	enum device_status status;
};
void update(struct device *d,enum device_status new_state)
{
	d->status=new_state;
}
void display(struct device d)
{
	printf("--- Device Details ---\n");
	printf("Device ID :%d\n",d.device_id);
	printf("Status :");
	switch (d.status)
	{
		case init:
			printf("INIT\n");
			break;
		case running:
			printf("RUNNING\n");
			break;
		case error:
			printf("ERROR\n");
			break;
	}
}
int main()
{
	struct device d;
	printf("Enter the Device ID:");
	scanf("%d",&d.device_id);
	d.status =  init;
	display(d);
	update(&d, running);
	display(d);
	update(&d, error);
	display(d);
	return 0;
}
