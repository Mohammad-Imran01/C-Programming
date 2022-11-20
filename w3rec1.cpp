#include<stdio.h>
int natural(int x);
int main()
{
    int i=1;
    natural(i);
    return 0;
}

int natural(int x)
{
    if(x<=50)
    {
        printf(" %d\n",x);
    natural(x+1);
    }
}