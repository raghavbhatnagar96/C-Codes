#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"
int main(int argc, char *argv[])
{
	FILE *in;
	int noGens;
	int i, j, w;
	char** matrix;
	char** matrix5;
	char** newgenMatrix;
	int a = countRow(argv[1]);
	int b = countColoumn(argv[1]);
	in = fopen(argv[1], "r+w");
	noGens = getnoGens(atoi(argv[2]));
	matrix = createMatrix("init.dat");
	printfunc("Generation 0\n");
	gen1(argv[1]);
	for(i = 0; i<noGens;i++)
	{
		printf("Generation %d\n", i+1);
		matrix5 = newGen(matrix, a, b);
		printMatrix(matrix5, a, b);
		matrix = matrix5;
	}
	w = return_a(0);
	return w;
}
