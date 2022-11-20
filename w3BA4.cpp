#include<stdio.h>

int check(int x)
{
    return ( x<=110 && x>=90 || x>=190 && x<=210 );
}
int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    printf("%d",check(x));
}