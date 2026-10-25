#include<stdio.h>
struct sensor
{
	int id;
	float temp;
	float humidity;
};
void access_update(struct sensor *s,float update)
{
	printf("Sensor ID:%d\n",s->id);
	printf("Initial Temperature:%.2f\n",s->temp);
	printf("Humidity:%.2f\n",s->humidity);
	s->temp = update;
	printf("Upadated Temperature:%.2f\n",s->temp);
}
int main()
{
	struct sensor s;
	float update;
	printf("Enter Sensor ID,Temperature,Humidity,Updated Temperature");
	scanf("%d %f %f %f",&s.id,&s.temp,&s.humidity,&update);
	access_update(&s,update);
	return 0;
}
