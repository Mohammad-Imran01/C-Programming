#include<stdio.h>


int main()
{
    int i,x,z=1,d=0;
    printf("Enter a number:\n");
    scanf("%d",&x);
    for(i=x;i>0;i--)
{
    z*=i;
}
    printf("Factorial of %d is %d:\n",x,z);
    while(z>0)
    {
        d=z%10+d*10;
        z/=10;
        if(d>0)
        {
            printf("%d",d);
            break;
        }
    }
    return 0;
}