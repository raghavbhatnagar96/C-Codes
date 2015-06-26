#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gen1(char *filename)
{
	char line[500];
	FILE *in;
	in = fopen(filename, "r + w");
	while(!feof(in))
	{
		fscanf(in, "%s\n", line);
		printf("%s\n", line);
	}
}


int countRow(char *filename)
{
	int count = 0;
	char line[50];
	FILE *in;
	in = fopen(filename, "r + w");
	while(!feof(in))
	{
		fscanf(in, "%s\n", line);
		count = count + 1;
	}
	return (count);
}

int countColoumn(char *filename)
{
	char line[500];
	FILE *in;
	in = fopen(filename, "r + w");
	fscanf(in, "%s", line);
	return strlen(line);
}

int printfunc(char *str)
{
	printf("%s", str);
	return 0;
}

int return_a(int a)
{
	return a;
}

char** createMatrix(char *filename)
{
	FILE *in;
	char letter;
	in = fopen(filename, "r");
	int i, j;
	int a = countRow(filename);
	int b = countColoumn(filename);
	char **matrix;
	matrix = (char**) malloc(sizeof(char*) * a);
	for(i=0;i<a;i++)
	{
		matrix[i] = (char*) malloc(sizeof(char)*b);
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			fscanf(in, "%c", &matrix[i][j]);
		}
		fscanf(in, "%c", &letter);
	}
	
	return matrix;
}

int getnoGens(int a)
{
	return a;
}

void printMatrix( char **matrix, int a, int b )
{
    int i, j;
    for( i = 0; i < a; i++ )
    {
		for( j = 0; j < b; j ++){
        printf( "%c", matrix[i][j] );
    }
    printf( "\n" );
    }
}

void printmultMatrix(char **matrix, int a, int b, int c)
{
	int i;
	for(i = 0; i<c;i++)
	{
		printMatrix(matrix, a, b);
	}
}

char** copyGen(char **matrix, int a, int b)
{
	int i, j;
	char **matrix2;
	matrix2 = (char**) malloc(sizeof(char*) * a);
	for(i=0;i<a;i++)
	{
		matrix2[i] = (char*) malloc(sizeof(char)*b);
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}
	return matrix2;
}

int **findNeighbour(char **matrix, int a, int b)
{
	int i, j, count = 0, k, l;
	int **matrix2;
	matrix2 = (int**) malloc(sizeof(int*) * a);
	for(i=0;i<a;i++)
	{
		matrix2[i] = (int*) malloc(sizeof(int)*b);
	}
	for(i = 0; i<a; i++)
	{
		for(j = 0; j<b; j++)
		{
			if((i > 0) && (j >0) && (i < (a-1)) && (j < (b-1)))
			{
				count = 0;
				for(k = -1; k<=1; k++)
				{
					for(l = -1; l<=1; l++)
					{
						if ((matrix[i + k][j + l] != '.')&&((k != 0)||(l !=0)))
						{
							count = count + 1;
						}
					}
				}
				matrix2[i][j] = count;
			}
			else if((i == 0) && (j == 0))
			{
				count = 0;
				for(k = 0; k<=1;k++)
				{
					for(l = 0; l<=1; l++)
					{
						if((matrix[i + k][j + l] != '.')&&((k != 0)||(l !=0)))
						{
							count = count + 1;
						}
					}
				}
				matrix2[i][j] = count;
			}
			else if((i == (a-1)) && (j == (b-1)))
			{
				count = 0;
				for(k = -1; k<=0;k++)
				{
					for(l = -1; l<=0; l++)
					{
						if((matrix[i + k][j + l] != '.')&&((k != 0)||(l !=0)))
						{
							count = count + 1;
						}
					}
				}
				matrix2[i][j] = count;
			}
			else if((i == 0) && (j == (b-1)))
			{
				count = 0;
				for(k = 0; k<=1;k++)
				{
					for(l = -1; l<=0; l++)
					{
						if((matrix[i + k][j + l] != '.')&&((k != 0)||(l !=0)))
						{
							count = count + 1;
						}
					}
				}
				matrix2[i][j] = count;
			}
			else if((i == (a-1)) && (j == 0))
			{
				count = 0;
				for(k = -1; k<=0;k++)
				{
					for(l = 0; l<=1; l++)
					{
						if((matrix[i + k][j + l] != '.')&&((k != 0)||(l !=0)))
						{
							count = count + 1;
						}
					}
				}
				matrix2[i][j] = count;
			}
			else if((i == 0) && (j < (b-1)))
			{
				count = 0;
				for(k = 0; k<=1;k++)
				{
					for(l = -1; l<=1; l++)
					{
						if((matrix[i + k][j + l] != '.')&&((k != 0)||(l !=0)))
						{
							count = count + 1;
						}
					}
				}
				matrix2[i][j] = count;
			}
			else if((i == (a-1)) && (j < (b-1)))
			{
				count = 0;
				for(k = -1; k<=0;k++)
				{
					for(l = -1; l<=1; l++)
					{
						if((matrix[i + k][j + l] != '.')&&((k != 0)||(l !=0)))
						{
							count = count + 1;
						}
					}
				}
				matrix2[i][j] = count;
			}
			else if((i < (a-1)) && (j == 0))
			{
				count = 0;
				for(k = -1; k<=1;k++)
				{
					for(l = 0; l<=1; l++)
					{
						if((matrix[i + k][j + l] != '.')&&((k != 0)||(l !=0)))
						{
							count = count + 1;
						}
					}
				}
				matrix2[i][j] = count;
			}
			else if((i < (a-1)) && (j == (b-1)))
			{
				count = 0;
				for(k = -1; k<=1;k++)
				{
					for(l = -1; l<=0; l++)
					{
						if((matrix[i + k][j + l] != '.')&&((k != 0)||(l !=0)))
						{
							count = count + 1;
						}
					}
				}
				matrix2[i][j] = count;
			}
		}
	}
	return matrix2;
}
	
char **newGen(char **matrix, int a, int b)
{
	int **matrix2 = findNeighbour(matrix, a, b);
	int i, j;
	char **newgenMatrix;
	newgenMatrix = (char**) malloc(sizeof(char*) * a);
	for(i=0;i<a;i++)
	{
		newgenMatrix[i] = (char*) malloc(sizeof(char)*b);
	}
	for(i = 0; i<a; i++)
	{
		for(j = 0; j<b; j++)
		{
			if(matrix[i][j] != '.')
			{
				if((matrix2[i][j] < 2)||(matrix2[i][j] > 3))
				{
					newgenMatrix[i][j] = '.';
				}
				else 
				{
					newgenMatrix[i][j] = matrix[i][j] - 1;
					if(newgenMatrix[i][j] == '.')
					{
						newgenMatrix[i][j] = newgenMatrix[i][j] - 1;
					}
					else if(newgenMatrix[i][j] - 1 == ' ')
					{
						newgenMatrix[i][j] = 'x';
					}
				}
			}
			else 
			{
				if(matrix2[i][j] == 3)
				{
					newgenMatrix[i][j] = 'x';
				}
				else if(matrix2[i][j] != 3)
				{
					newgenMatrix[i][j] = '.';
				}
			}
		}
	}
	return newgenMatrix;
}
