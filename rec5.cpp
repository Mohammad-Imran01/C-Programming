#include<stdio.h>
int counter(int x)
{
static int i=0;
    if(x!=0)
    {
        i++;
      
        counter(x/10);
    }
    return i;
}

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("\nNumber of digits : %d ",counter(x));
    return 0;
}