#include<stdio.h>
pFactors(int x)
{
    int i,j,flag =0;
    printf("\nPrime factors are :");
    for(i=2;x>1;i++)
    {
       while(x%i == 0)
       {
           printf(" %d",i);
           x/=i;
       }

    }
}

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);

    pFactors(x);

    return 0;
}