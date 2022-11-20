#include<stdio.h>
int main()
{
    int Cost,sell;

    printf("Enter Cost and Selling price:\n");
    scanf("%d%d",&Cost,&sell);

    if(Cost>sell) printf("Incurred by %d",Cost-sell);
    else if(Cost-sell==0) printf("No profit and incurred");
    if(Cost<sell) printf("profit by %d",sell-Cost);

    return 0;
}