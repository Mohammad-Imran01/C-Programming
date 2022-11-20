#include<stdio.h>

int istemp(int x,int y)
{
    return (x<0 && y>100 || x>100 && y<0);
}

int main()
{
    int x,y;
    printf("Enter two temperature:\n");
    scanf("%d%d",&x,&y);
    printf("%d",istemp(x,y));
}