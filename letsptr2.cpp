#include<stdio.h>
void printer(int a,int b, int c,float *avg,float *perc)
{
    *avg= (a+b+c)/3.0;
    *perc= ((a+b+c)*100)/300.0;
}

int main()
{
    int a,b,c;
    float avg,perc;
    printf("Enter three subject's numbers :\n");
    scanf("%d%d%d",&a,&b,&c);

    printer(a,b,c,&avg,&perc);
    printf("\nAvg : %0.2f\nPercentage : %0.2f",avg,perc);
    return 0;

}
