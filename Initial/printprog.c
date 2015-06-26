#include<stdio.h>
int main()
{
    FILE *in;
    char c;
    in = fopen("printprog.c", "r");
    
    while ( feof(in) == 0)
    {
        fscanf(in, "%c", &c);
        printf("%c",  c);
    }
    fclose(in);
    return 0;
}


    
    
