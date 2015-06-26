#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int i , ht, wd, k;
	FILE **in;
	int a, b;
	char c;
	in = fopen(argv[1], "r");
	fscanf(in, "%d %d", &ht, &wd);
	char **array;
	array =(char **)malloc(sizeof(char *) * ht);
	for(i = 0; i < ht; i++)
	{
		array[i] = (char *)malloc(sizeof(char) * wd);
	}
	while(!feof(in))
	{
		
		fscanf(in, "%d %d %c", &a, &b, &c);
		array[a][b] = c;
	}
	for(i = 0; i < ht; i++)
	{
		for(k = 0; k<wd; k++)
		{
			if (array[i][k] == "@")
			{
				printf(" ");
			}
			else
			{
				printf("%c", array[i][k]);
			}
		}
		printf("\n");
	}
	return 0;
}

