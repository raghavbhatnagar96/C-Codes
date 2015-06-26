#include <stdio.h>

int main()
{
	FILE * song;
	FILE * new;
	FILE * in;
	int i=0;
	int n = -8;
	char store[500], store2[500];
	song = fopen("song.rra", "r");
	while(!feof(song)
	{
		fscanf(song, "%s", store);
		n = n + 1;
	}
	fclose(song);
	int array2[n-8];
	in = fopen("song.rra", "r");
	new = fopen("new.rra", "a");
	fscanf(in, "%s", store2);
	fprintf(new, "%s\n", store2);
	fscanf(in, "%s", store2);
	fprintf(new, "%s", store2);
	fscanf(in, "%s", store2);
	fprintf(new, "%s\n", store2);
	fscanf(in, "%s", store2);
	fprintf(new, "%s", store2);
	fscanf(in, "%s", store2);
	fprintf(new, "%s\n", store2);
	fscanf(in, "%s", store2);
	fprintf(new, "%s", store2);
	fscanf(in, "%s", store2);
	fprintf(new, "%s\n", store2);
	fscanf(in, "%s", store2);
	fprintf(new, "%s\n", store2);
	for(i = 0; i < (n-6); i++)
	{
		fscanf(in, "%d", &array2[i]);
	}
	for(i = (n-6); i >= 0; i--)
	{
		fprintf(new, "%d\n", array2[i]);
	}
	return 0;
}
