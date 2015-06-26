#include<stdio.h>
int main()
   {
   FILE *in;
   in = fopen("copy.c","r");
   char ch;
   while(!feof(in))
	{
	fscanf(in,"%c",&ch);
	printf("%c",ch);
	}
   fclose(in);
   return 0;
   }	
