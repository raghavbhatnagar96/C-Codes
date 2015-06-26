#include <stdio.h>
#include <stdlib.h>
int** transpose(int **array, int a, int b)
{
	int **array2;
	int i, j;
	array2 = (int**)malloc(sizeof(int*)*a);
	for(i=0;i<a;i++)
	{
		array2[i] = (int*)malloc(sizeof(int)*b);
	}
	for(i=0; i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			array2[j][i] = array[i][j];
		}
	}
	return array2;
}

int main(int argc, char **argv)
{
	int i, j;
	int **matrix;
	int **matrix2;
	matrix2 = (int**)malloc(sizeof(int*)*4);
	for(i=0;i<4;i++)
	{
		matrix2[i] = (int*)malloc(sizeof(int)*4);
	}
	matrix = (int**)malloc(sizeof(int*)*4);
	for(i=0;i<4;i++)
	{
		matrix[i] = (int*)malloc(sizeof(int)*4);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	matrix2 = transpose(matrix, 4, 4);
	for(i = 0; i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ", matrix2[i][j]);
		}
	printf("\n");
	}
	return 0;
}


