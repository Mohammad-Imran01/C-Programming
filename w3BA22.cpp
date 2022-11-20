#include<stdio.h>

int sum(int x, int y)
{
    if(x<21 && x>9 || y<21 && y>9)
        return 18;
    else
        return x+y;
}

int main()
{
    int x,y;

    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);

    printf("%d",sum(x,y));

    return 0;
}