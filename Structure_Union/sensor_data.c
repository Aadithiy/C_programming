#include<stdio.h>
struct sensor
{
	int id;
	char name[20];
	float reading;
};
int main()
{
	struct sensor s[20];
	int i,n,max=0;
	float average,sum=0;
	printf("Enter number of Sensor:");
	scanf("%d",&n);
	printf("Enter the ID ,Name ,Values:");
	for(i=0;i<n;i++)
	{
		scanf("%d %19s %f",&s[i].id,s[i].name,&s[i].reading);
	}
	for(i=0;i<n;i++)
	{
		sum +=s[i].reading;
	}
	average=sum/n;
	for(i=1;i<n;i++)
	{
		if(s[i].reading>s[max].reading)
		{
			max=i;
		}
	}
	printf("ID:%d\nName:%s\nReading:%.2f\n",s[max].id,s[max].name,s[max].reading);
	printf("Average of Reading:%.2f",average);
	return 0;
}
