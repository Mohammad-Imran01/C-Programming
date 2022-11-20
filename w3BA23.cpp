#include<stdio.h>

int check(int x, int y, int z)
{
    if(x+y==z)
    return 1;
    return 0;
}

int main()
{
    int x,y,z;

    printf("Enter three integers:\n");
    scanf("%d%d%d",&x,&y,&z);

    printf("%d",check(x,y,z));
    return 0;
}