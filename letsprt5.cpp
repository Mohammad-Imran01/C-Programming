#include<stdio.h>
#include<math.h>

void area(int a,int b,int c,float *area,float s)
{
    *area = sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
    int x,y,z;
    float Area,semi;
    printf("Enter the values of three side of the triangle : \n");
    scanf("%d%d%d",&x,&y,&z);

    semi = (x+y+z)/2.0;
    area(x,y,z,&Area,semi);

    printf("\nArea of the traingle is %f \n\n",Area);
    return 0;
}