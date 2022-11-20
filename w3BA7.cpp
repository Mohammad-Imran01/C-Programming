#include<stdio.h>

int check(int x,int y)
{
    return (x<201 && x>99 ||y<201 && y>99 );
}


int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);

    printf("%d",check(x,y));
}