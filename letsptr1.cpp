#include<stdio.h>
#include<math.h>
void finder(int a,int b, int c, int d, int e,int *sum,float *avg,float *s_d)
{
    *sum = (a+b+c+d+e); *avg = *sum/5.0;
    *s_d = sqrt( ( (a-*avg)*(a-*avg) ) + ( (b-*avg)*(b-*avg) )+  ( (c-*avg)*(c-*avg) ) + ( (d-*avg)*(d-*avg) ) + ( (e-*avg)*(e-*avg) )/5.0 );

}
int main()
{
    int a,b,c,d,e,sum;
    float avg,s_d;

    printf("Enter 5 nums : \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    finder(a,b,c,d,e,&sum,&avg,&s_d);
    printf("\nSum : %d",sum);
    printf("\nAvg : %0.2f",avg);
    printf("\nStandard deviation : %0.2f",s_d);
    return 0;
}