#include<stdio.h>
int sum(int x)
{
static int i=0;
    if(x!=0)
    {
        i+=x%10;
      
        sum(x/10);
    }
    return i;
}

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("\nSum of digits : %d ",sum(x));
    return 0;
}