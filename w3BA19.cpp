#include<stdio.h>
#include<stdlib.h>

int test(int x)
{
    return ( x % 13 == 0 || x % 14 == 0 );
}

int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);

    printf("%d",test(x));
    return 0;
}