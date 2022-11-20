#include<stdio.h>
#include<math.h>

float distance(float x1, float y1, float x2, float y2)  
{  
    return( sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2) ) );  
}  

float cal_area(float a, float b, float c)
{
    float S,ar;

    S = (a+b+c)/2.0;

    ar = (sqrt(S*(S-a)*(S-b)*(S-c)));
    return (ar);
}

int main()
{
    float x1,y1,x2,y2,x3,y3;
    float area=0;
    printf("Enter (x1,y1)\n"); 
    scanf("%f%f",&x1,&y1);
    
    printf("Enter (x2,y2)\n"); 
    scanf("%f%f",&x2,&y2);
    
    printf("Enter (x3,y3)\n"); 
    scanf("%f%f",&x3,&y3);

    printf("Enter (x,y)");
    scanf("%f%f",&x,&y);

    float a,b,c;
    a = distance(x1,y1,x2,y2);
    b = distance(x2,y2,x3,y3);
    c = distance(x3,y3,x1,y1);

    printf("\na = %f",a);
    printf("\nb = %f",b);
    printf("\nc = %f",c);
    return 0;
}