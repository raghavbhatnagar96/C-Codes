#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    FILE *in;
    float x, y, angle, radian;
    in = fopen("image.dat", "r");
    while(!feof)
    fopen("Right.txt", "r");
    fopen("Left.txt", "r");
    fopen("Straight.txt", "r");
    {
        fscanf(in, "%f", &x);
        fscanf(in, "%f", &y);
        radian = atan2(x, y);
        angle = radian*180/M_PI;
        if( -180 < angle < -90)
        {
            speak("Right.txt");
        }
        if(0 > angle > -90)
        {
            speak("Left.txt");
        }
        if(0 < angle < 90)
        {
            speak("Right.txt");
        }
        if (90 < angle < 180)
        {
            speak("Left.txt");
        }
        if(angle = 90)
        {
            speak("Straight.txt");
        }
    }
    fclose(in);
    return 0;
}
