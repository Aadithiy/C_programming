#include <stdio.h>
union Data
{
	int i;
	float f;
	char c;
};
int main()
{
	union Data d;
	int n, i;
	char type;
	printf("Enter Number of Elements:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter the type:");
		scanf(" %c", &type);
		switch (type)
		{
			case 'I':
				scanf("%d", &d.i);
				printf("Integer : %d\n", d.i);
			       	break;
			case 'F':
				scanf("%f", &d.f);
				printf("Float : %.2f\n", d.f);
				break;
			case 'C':
				scanf(" %c", &d.c);
				printf("Character : %c\n", d.c);
				break;
		}
	}
	return 0;
}
