#include<stdio.h>
int natural(int x);
int main()
{
    printf("%d",natural(1));
    return 0;
}

int natural(int x)
{
    if(x>10)return 0;
    x+=natural(x+1);
    return x;
}