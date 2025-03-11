
#include <stdio.h>

int main()
{
    float p;
    float t;
    float r;
    float a;
    printf("enter principle amount");
    scanf("%f",&p);
    printf("enter time in years");
    scanf("%f",&t);
    printf("enter rate of intrest");
    scanf("%f",&r);
     
     a=p*t*r/100 ;
    return 0;
}
