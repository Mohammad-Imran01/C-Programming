#include<stdio.h>
int main()
{
    int x,y;
    int a,b,c,d;
    printf("Enter two four digits number x and y:\n");
    scanf("%d%d",&x,&y);

    // assinging a,b,c,d their values:
    printf("%d\n%d",x,y);
    a=x/100;
    b=x%100;
    c=y/100;
    d=y%100;

    //step 1: a.c
    //step 2:b.d
    int s1 = a*c;
    int s2 = b*d;

    //step 4: (a+b)*(c+d);
    ///step 5: s3 - s2 -s1;
    int s3 = (a+b)*(c+d);
    int s4 = s3 - s2 -s1;

    int s5 = ( s1*10*10*10*10 ) + ( s4 * 10 * 10 ) + s2;


printf("\n %d X %d = %d.",x,y,s5);

}