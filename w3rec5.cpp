#include<stdio.h>
int count(int x,int z);
int main()
{
    printf("\nNumber of digits : %d\n",count(12345,0));
    return 0;
}

int count(int x,int z)
{
    if(x==0)return z;
    count(x/=10,z+=1);
}