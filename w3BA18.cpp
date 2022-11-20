#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);

    if(x==5 || y==5 || x+y ==5 || x-y==5 || y-x==5)
    {
        printf("True");
    }
    else
        printf("False");

    return 0;
}