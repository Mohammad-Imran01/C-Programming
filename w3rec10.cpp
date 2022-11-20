#include<stdio.h>
int facto(int x)
{
    if(x==0)return 1;
    return x*=facto(x-1);
}
int main()
{
    int x=5;
    printf("%d is factorial of %d",facto(x),x);
    return 0;
}