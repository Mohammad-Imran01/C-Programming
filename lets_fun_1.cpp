

#include<stdio.h>
int fact(int x)
{
    int i = x-1;
    int y=0;int f=0;
    while(i!=0)
    {
       
       y=x*i;
       f+=y;
       x=y;
       i--;
    }
    return y;
}
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);

    int factorial = fact(x);
    printf("%d",factorial);
    return 0;
}