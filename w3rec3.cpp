#include<stdio.h>
int fibo(int x)
{
    if(x==0)return 0;
    if(x==1||x==2)return 1;
    return fibo(x-1)+fibo(x-2);
}
int main()
{
    int x=1;
    for(int i = 1;i<=10;i++)
    {
        printf(" %d",fibo(i));
    }
    return 0;
}