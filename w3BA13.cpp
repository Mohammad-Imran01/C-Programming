#include<stdio.h>
#include<stdlib.h>

int n_check(int x, int y)
{
    return abs(x%10) == abs(y%10);
}

int main()
{
    int x,y;

    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);

    printf("%d",n_check(x,y));
}