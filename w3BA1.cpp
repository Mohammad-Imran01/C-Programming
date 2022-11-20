#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the values of two numbers:\n");
    scanf("%d%d",&x,&y);
    if (x==y)
    {
        printf("Triple of there sum : %d\n",(3*(x+y)));
    }
    else
    printf("Sum is: %d",(x+y));
    
    return 0;
}