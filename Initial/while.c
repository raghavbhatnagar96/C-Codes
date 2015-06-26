#include<stdio.h>
int main(int argc, char*argv[])
  {
   int x;
   int a=atoi(argv[1]);
   int b=atoi(argv[2]);
   int c=atoi(argv[3]);
   x=a;
   while(x<=b)
    {  
       printf("%d ",x);
       x=x+c;
    }
  }  
