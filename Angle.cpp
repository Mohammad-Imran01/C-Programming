#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int h,m;
    double angle;
    const int num[13] = { 0 , 30 , 60,90,120,180,210,240,270,300,330,0};

    printf("Input Hour(h) and Minutes(m) (separated by a space ):\n");
    scanf("%d %d ,&h,&m");
    angle = num[h] - m*5.5;

    if(angle < 0 )
    angle = -angle;
    
    if(angle>180)
    angle = 360 - angle;

    if(m < 10)
    printf("At %d:0%d the angle is %.lf degrees.\n",h,m,angle);
    else
    printf("The angle is %.lf degrees at %d:%d.\n",angle,h,m);
    return 0;
}