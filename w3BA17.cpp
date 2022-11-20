#include<stdio.h>
int sum(int x,int y)
{
    if(x+y>9 && x+y <21)
        {return 30;}
        return 0;
}
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);

    printf("%d",sum(x,y));
    return 0;
}
