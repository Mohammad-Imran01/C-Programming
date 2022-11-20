#include<stdio.h>
int fib(int i)
{
    if (i==0)return 0;
    if (i==1)return 1;
    return (fib(i-1)+fib(i-2));
}
int main()
{
    int i,j;
    printf("Enter a number : ");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        printf(" %d",fib(j));
    }
    return 0;
}