#include<stdio.h>

int isNear(int x, int y)

{
    if (x==y)
        return 0;
    if(100-x < 100-y)
        return x;
    if(100-x > 100 -y)
        return y;
    
    else
        printf("Enter valid numbers!");
}

int main()
{
    int x,y;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);

    printf("\n%d is nearest to 100:\n",isNear(x,y));

}