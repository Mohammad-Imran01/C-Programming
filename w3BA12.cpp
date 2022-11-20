#include<stdio.h>

int inRange(int x, int y)
{
    if(x>=20 && x <=30 && y>=20 && y <=30)
    {
        if (x>y)
            return x;
        else
            return y;
        
    }
    else
        return 0;
}

int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);

    printf("%d",inRange(x,y));
}