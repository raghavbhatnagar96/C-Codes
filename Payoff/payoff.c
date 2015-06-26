#include<stdio.h>
int main()
{
    int miles;
    float cpg;
    float cfm;
    float mpg1;
    float mpg2;
   
    printf ("enter miles: \n");
    scanf("%d",&miles);
    printf ("enter cost per gallon:\n ");
    scanf("%f",&cpg);
    printf ("enter cost of modification:\n ");
    scanf("%f",&cfm);
    printf ("enter mpg before modification: \n");
    scanf("%f",&mpg1);
    printf ("enter mpg after modification: \n");
    scanf("%f",&mpg2);

    float dwtm = (miles/mpg1)*cpg;   
    printf("The yearly cost of driving without modification: %4.2f\n", dwtm);
    float dwm = (miles/mpg2)*cpg;
    printf("The yearly cost of driving with modification: %4.2f\n", dwm);
 
    float ppy = (dwtm - dwm);
    float years1 = cfm/ppy;
    int years = cfm/ppy;
    int days = (years1 - years)*365;
    if (years == 1 )
        printf("\n%d year ", years);
        else if (years > 1) 
            printf("\n%d years ", years);
        else if (years == 0 )
            printf("\n");
    else 
    printf("invalid entry");
    
    if (days == 1)
        printf("%d day\n", days);
        else if (days>1)
            printf(" %d days\n", days);
        else if (days == 0)
            printf("\n");
    else 
    printf("invalid entry");
    return 0;    
}
