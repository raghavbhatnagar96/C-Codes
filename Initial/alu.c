#include<stdio.h>
int main(int argc, char*argv[])
{
  int x;
  x=atoi(argv[1]);
  if(x!=0)
    {
     if(x & 0x01)
       {
         printf("Multiplexer selected\n");
       }
     if(x & 0x02)
       {
         printf("Demultiplexer selected\n");
       }
     if(x & 0x04)
       {
         printf("Encoding selected\n");
       }
     if(x & 0x08)
       {
         printf("Decoding selected\n");
       }
     if(x & 0x10)
       {
         printf("dma selected\n");
       }
     if(x & 0x20)
       {
         printf("rma selected\n");
       }
     if(x & 0x40)
       {
         printf("Updating-cache selected\n");
       }
     if(x & 0x80)
       { 
         printf("Recent-memory-search selected\n");
       }
    }
  else
       {
         printf("0x01: multiplexer\n");
         printf("0x02: demultiplexer\n");
         printf("0x04: encoding\n");
         printf("0x08: decoding\n");
         printf("0x10: dma\n");
         printf("0x20: rma\n");
         printf("0x40: updating-cache\n");
         printf("0x80: recent-memory-search\n");
       }
       return 0;
}       
