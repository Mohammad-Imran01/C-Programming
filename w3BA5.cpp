#include<stdio.h>

int multiple(int x)
{
    return (x%3==0||x%7==0);
}

int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    printf("%d",multiple(x));
    return 0;
}