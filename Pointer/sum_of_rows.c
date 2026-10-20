#include<stdio.h>
void sum_row(int (*mat)[4],int rows,int sum[])
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		sum[i]=0;
		for(j=0;j<4;j++)
		{
			sum[i] += *(*(mat+i)+j);
		}
	}
}
int main()
{
	int mat[3][4]={{1,2,3,4},{5,6,7,8},{9,11,21,32}};
	int sum[3];
	sum_row(mat,3,sum);
	for(int i=0;i<3;i++)
	{
		printf("Row %d sum:%d\n",i,sum[i]);
	}
	return 0;
}
