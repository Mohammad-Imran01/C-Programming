#include<stdio.h>
int main()
{
    int quantity,dis;
    float rate,tot;

    printf("Enter the values of quantity and rate :\n\n");
    scanf("%d%f",&quantity,&rate);
    
    printf("Purchased amount = %.0f\n",(quantity*rate));
    
    dis = 0;

    if((quantity*rate)>=1000)
    {
        dis = quantity*rate*10/100;
    }

    tot = quantity*rate-dis;

    
    printf("Total amount = %.1f",tot);

    return 0;


}