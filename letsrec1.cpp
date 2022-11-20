#include<stdio.h>
int Rsum(int x)
  {
    if(x)
    return (x%10)+Rsum(x/10);
    return 0;   }

int Fsum(int x)
{
    int s=0;
    while(x)
    {
    s += x%10;
    x/=10;
    }
    return s;
}
int main()
{
    int  x;
    printf("Enter a number : ");
    scanf("%d",&x);

    printf("\nRecursively Sum : %d",Rsum(x));
    printf("\nSum without recursion : %d\n\n\n\n",Fsum(x));
    return 0;
}