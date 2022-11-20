#include<stdio.h>

int test(int x,int y)
{
   return (x ==30 || y==30 || x+y==30);
}

int main()
{
    int x,y,z;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);

    printf("%d",test(x,y));
}