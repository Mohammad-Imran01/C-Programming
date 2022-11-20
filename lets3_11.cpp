#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter co-ordinates of (x,y)  \n");
    scanf("%d%d",&x,&y);

    if(x==y && y== 0 ) printf("Lies on origin");
    if(x==0 && y!=0) printf("Lies on y axis");
    if(x!=0 && y==0) printf("Lies on x axis");

    else
    printf("Doesnt Lies on x or y axis even not on the origin :\n");

    return 0;
}