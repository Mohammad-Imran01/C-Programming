#include<stdio.h>
int main()
{
    int count=0,sum=0,x;
    double avg;
    printf("Inout numbers in different lines (888 to exit):\n");
    scanf("%d",&x);
    while (x!=888)
    {
        sum+=x;
        count++;
        avg = (float) sum/count;
    }
    while (avg)
    {
        printf("%lf",avg);
    }
    
    return 0;
}