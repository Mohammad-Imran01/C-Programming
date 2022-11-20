#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    printf("Length and breadth :\n");
    scanf("%d%d",&x,&y);

    if(2*(x+y) > x*y)
    printf("Perimeter is bigger than area.\n");
    else
    printf("Area is bigger.\n");

    return 0;
}