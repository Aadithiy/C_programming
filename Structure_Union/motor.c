#include<stdio.h>
enum Direction
{
	cw,
	ccw
};
struct Motor
{
	int speed;
	enum Direction direction;
};
int main()
{
	struct Motor m;
	printf("Enter the Speed of Motor :");
	scanf("%d",&m.speed);
	printf("Enter the Direction (cw=0 :ccw=1):");
	scanf("%d", (int *)&m.direction);
	printf("\n---Motor Details---\n");
	printf("Speed = %d RPM\n",m.speed);
	if(m.direction == cw)
		printf("Direction of Motor : CW\n");
	else
		printf("Direction of Motor : CCW\n");
	return 0;
}
