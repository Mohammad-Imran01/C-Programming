#include<stdio.h>
#include<math.h>

float distance(float x1, float y1, float x2, float y2)  
{  
    return( sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2) ) );  
}  

void cal_area(float a, float b, float c,float *area)
{
    float S,ar;

    S = (a+b+c)/2.0;

    *area = (sqrt(S*(S-a)*(S-b)*(S-c)));
}

int position(float area, float A, float B, float C)
{
    float res;

    res = area-(A+B+C);

    if(res==0 || res<0.0001)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

int main()
{
    float x1,y1,x2,y2,x3,y3,x,y;
    float area=0;
    printf("Enter (x1,y1)\n"); 
    scanf("%f%f",&x1,&y1);
    
    printf("Enter (x2,y2)\n"); 
    scanf("%f%f",&x2,&y2);
    
    printf("Enter (x3,y3)\n"); 
    scanf("%f%f",&x3,&y3);

    printf("Enter (x,y)");
    scanf("%f%f",&x,&y);

    float a,b,c,d,e,f,A,B,C;
    a = distance(x1,y1,x2,y2);
    b = distance(x2,y2,x3,y3);
    c = distance(x3,y3,x1,y1);
    cal_area(a,b,c,&area);

    d = distance(x1,y1,x,y);
    e = distance(x2,y2,x,y);
    f = distance(x3,y3,x,y);

    cal_area(d,e,a,&A);
    cal_area(e,b,f,&B);
    cal_area(f,c,d,&c);

    printf("\na = %.2f",a);
    printf("\nb = %.2f",b);
    printf("\nc = %.2f",c);
    printf("\nd = %.2f",d);
    printf("\ne = %.2f",e);
    printf("\nf = %.2f",f);

    printf("\nArea is : %.2f",area);

    int flag = position(area, A, B, C);

    if (flag==1)
        printf("\nPoint(%.2f, %.2f) lies inside the triangle.",x,y);
    else
        printf("\nPoint(%.2f, %.2f) lies outside the triangle.",x,y);
        return 0;
    return 0;
}