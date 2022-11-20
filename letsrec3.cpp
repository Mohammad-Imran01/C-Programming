#include<stdio.h>
int fib(int x)
{
    if(x==1)return 0;
    if(x==2 || x==3)return 1;
    return (fib(x-1)+fib(x-2));
}
int main()
{
    int i;

    for(i=1;i<=25;i++)
    {
        printf(" %d",fib(i));
    }
    return 0;
}