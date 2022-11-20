#include<stdio.h>

int inRange(int x,int y, int z)
{
    return ( x < 51  &&  x > 19 || y < 51  &&  y > 19 || z < 51  &&  z > 19 );
}

int main()
{
    int x,y,z;

    printf("Enter three numbers :\n");
    scanf("%d%d%d",&x,&y,&z);

    printf("%d",inRange(x,y,z));

}