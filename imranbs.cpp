#include<stdio.h>
int main()
{
    float bs,gs,ds,hr;

    printf("\nbasic salary : ");
    scanf("%f",&bs);

    hr = 0.2*bs; ds = 0.4*bs;

    gs = bs+hr+ds;

    printf("Gross Sal123345ary : %.2f",gs);

    return 0;
}