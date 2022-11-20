#include<stdio.h>
int main()
{
    int i,j,x,y,z;
    printf("Enter a five digit number:\n");
    scanf("%d",&x);
    z=x;
    y=0;
    while(z!=0)
    {
        y = y*10;
        y = y+z%10;
        z = z/10;
    }
    printf("\nx = %d\n",x);
    printf("y = %d\n",y);
    if(x==y)
    {
        printf("The is a Palindrome:\n");
    }
    else
    printf("No it isn't a Plindrome:\n");
    return 0;
}