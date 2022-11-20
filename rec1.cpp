#include<stdio.h>
int natural(int i)
{
    printf(" %d",i);
    if(i<50)
    {
       natural(i+1);
    }
}
int main()
{
    int i=1;
    natural(i);
    return 0;
}