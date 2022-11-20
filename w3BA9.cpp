#include<stdio.h>

int inRange(int x, int y)
{
    return ( x<51 && x >19 || y<51 && y >19);
}

int main()
{
    int x,y;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);

    printf("%d",inRange(x,y));   

}