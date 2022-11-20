#include<stdio.h>
int main()
{
    int x,y,count=0,sum=0;
    printf("Enter numbers!\n");
    scanf("%d",&x);
    while (x!=888)
    {
       
        sum+=x;
        count++;
        scanf("%d",&x);
    }
    double avg = (float sum)/count;
    printf("Average = %lf",avg);
    return 0;
    
}
