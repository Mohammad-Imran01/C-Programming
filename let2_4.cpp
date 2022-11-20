#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,theta;
    const float PI = 3.141592;

    printf("Enter the co-ordinates in cartesian (x,y) form \n");
    scanf("%f%f",&x,&y);

    r = sqrt(x*x+y*y);

    theta = atan(y/x);

    theta = theta*(180.0/PI);

    printf("Polar co-ordinates for : (r , theta ) = (%f, %f)\n\n",r,theta);

    return 0;
}