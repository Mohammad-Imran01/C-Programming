#include<stdio.h>
#include<math.h>
int main()
{
    float m,n;
    float x1,x2,x3,y1,y2,y3;

    printf("Enter first point (x1,y1) \n");
    scanf("%f%f",&x1,&y1);

    printf("Second point (x2,y2) \n");
    scanf("%f%f",&x2,&y2);

    printf("Third point at (x3,y3)\n");
    scanf("%f%f",&x3,&y3);

    m = (y2-y1)/(x2-x1);
    n = (y3-y2)/(x3-x2);

    if (m==n)
    printf("Lies on the same line :\n");
    else
    printf("Doesn't lies on the same line : \n");

    return 0;


}