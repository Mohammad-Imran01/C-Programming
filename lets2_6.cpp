#include<stdio.h>
#include<math.h>

int main()
{
    float t,v;
    double wcf;

    printf("Enter temp :\n");
    scanf("%f",&t);

    printf("Enter velocity of wind :\n");
    scanf("%f",&v);

    wcf = 35.74 + 0.6215*t + ( 0.4275*t - 35.75 ) * pow(v,0.16);

    printf("WCF of given temperature and velocity of wind is : %.2f",wcf);

    return 0;

}