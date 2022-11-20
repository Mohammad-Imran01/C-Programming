#include<stdio.h>

int inRange(int x, int y)
{
    return( x < 61 && x > 39 && y < 61 &&  y > 39);
}

int main()
{
    int x,y;

    printf("Enter the values of x and y :\n");
    scanf("%d%d",&x,&y);

    printf("%d",inRange(x,y));
    
}