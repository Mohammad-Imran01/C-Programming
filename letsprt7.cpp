#include<stdio.h>

void G_div(int num, int den,int *gcd)
{
    int x=0,temp=0;
    if (num == 0) *gcd = den;
    if (den == 0) *gcd = num;
    else
    {
        x = num/den;
        temp = num-x*den;
        while(temp)
        {
            num = den;
            den = temp;
            x = num/den;
            temp = num-x*den;
        }
        *gcd = den;
    }
}
int main()
{
    int x,y,gcd=0,a=0;
    printf("Enter X and Y \n");
    scanf("%d%d",&x,&y);
    
    G_div(x,y,&gcd);

    printf("\nGCD : %d\n\n",gcd);
    return 0;
}