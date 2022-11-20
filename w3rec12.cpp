#include<stdio.h>

int isp(int x,int i)
{
    while(i<x)
    {
        if(x%i==0) return 0;
        isp(x,i+1);return 1;
    }
}

int main()
{
    int x=101;
    printf("Is %d prime? %d",x,isp(x,2));
    return 0;
}