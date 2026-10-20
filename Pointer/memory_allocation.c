#include<stdio.h>
#include<stdlib.h>
int **creatematrix(int m,int n)
{
	int i,j;
	int **mat;
	mat = malloc(m * sizeof(int *));
	if(mat == NULL)
	{
		return NULL;
	}
	for(i=0;i<m;i++)
	{
		mat[i] = malloc(n * sizeof(int));
		if(mat[i] == NULL)
		{
			while(i>0)
			{
				free(mat[--i]);
			}
			free(mat);
			return NULL;
		}
	}
	return mat;
}
void freemtrix(int **mat,int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		free(mat[i]);
	}
	free(mat);
}
int main()
{
	int **mat;
	int n,m,i,j;
	printf("Enter the Rows and Column:");
	scanf("%d %d",&m,&n);
	if(m<=0 || n<=0)
	{
		printf("Invalid Rows and Column");
		return 1;
	}
	mat = creatematrix(m,n);
	if(mat == NULL)
	{
		printf("memory allocation failed");
		return 1;
	}
	printf("Enter the Elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	freemtrix(mat,m);
	printf("Memory freed\n");
	return 0;
}
