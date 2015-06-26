#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int  main(int argc, char*argv[])
{
	int x, y;
    float radian,u,v, angle, dist1 = 1, dist2 = 0;
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	radian = atan2(y, x);
    angle = radian*180/M_PI;
	fopen("Straight.txt", "r");
	fopen("Right.txt", "r");
	fopen("Left.txt", "r");
	float dist(int x, int y)
	{
       	return  pow(x, 2) + pow(y, 2);
   	}
    printf("%d %d\n",x,y);    
    while (dist2 < dist1)   
	{	
	    radian = atan2(y, x);
    	angle = radian*180/M_PI;
        if( -180 < angle && angle< -90)
        {
            speak("Right.txt");
	        dist1 = dist(x,y);
            x = x + 10;
            y = y + 10;
            dist2 = dist(x,y);
            printf("%d %d\n", x, y);
            dist1 = dist2;
	        u = x + 10;
            v = y + 10;
  	        dist2 = dist(u,v);
	  	    if (dist2 >= dist1)
	        {
		        break;
	        }
	    }
        else if(0 > angle && angle > -90)
        {
            speak("Left.txt");
            dist1 = dist(x,y);
            x = x - 10;
            y = y + 10;
            dist2 = dist(x,y);
            printf("%d %d\n", x, y);
            dist1 = dist2;
	        u = x - 10;
            v = y + 10;
  	        dist2 = dist(u,v);
	  
	        if (dist2 >= dist1)
	        {
		        break;
	        }
        }
        else if(0 < angle && angle < 90)
        {
            speak("Right.txt");
            dist1 = dist(x,y);
            x = x - 10;
            y = y - 10;
            dist2 = dist(x,y);
            printf("%d %d\n", x, y);
	        dist1 = dist2;
 	        u = x - 10;
            v = y - 10;
            dist2 = dist(u,v);
	  	    if (dist2 >= dist1)
	        {
		        break;
	        }
	    }
        else if (90 < angle && angle < 180)
        {
            speak("Left.txt");
            dist1 = dist(x,y);
            x = x + 10;
            y = y - 10;
            dist2 = dist(x,y);
    	    printf("%d %d\n", x, y);
            dist1 = dist2;
	        u = x + 10;
            v = y - 10;
  	        dist2 = dist(u,v);
	  	    if (dist2 >= dist1)
	        {
		    break;
	        }
        }
        else if(angle == 90 || angle == -90)
        {
            speak("Straight.txt");
            dist1 = dist(x,y);
            y = y - 10;
            x = x + 10;
            dist2 = dist(x,y);
            printf("%d %d\n", x, y);
            dist1 = dist2;
	        u = x;
            v = y - 10;
  	        dist2 = dist(u,v);
	  	    if (dist2 >= dist1)
	        {
		        break;
	        }
        }
        else if(angle = 180)
        {
            speak("Right.txt");
            dist1 = dist(x,y);
            x = x - 10;
            y = y + 10;
            dist2 = dist(x,y);
            printf("%d %d\n", x, y);
            dist1 = dist2;
	        u = x - 10;
            v = y + 10;
  	        dist2 = dist(u,v);
	  	    if (dist2 >= dist1)
	        {
		        break;
	        }
        }
	    else if(angle = 0)
        {
            speak("Left.txt");
            dist1 = dist(x,y);
            x = x - 10;
            y = y + 10;
            dist2 = dist(x,y);
            printf("%d %d\n", x, y);
            dist1 = dist2;
	        u = x - 10;
            v = y;
  	        dist2 = dist(u,v);
	  	    if (dist2 >= dist1)
	        {
		        break;
	        }
        }
	
	}    
    return 0;
}
