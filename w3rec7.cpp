#include<stdio.h>
int HCF(int x,int y)
{
    while(x!=y)
    {
        if(x>y)return HCF(x-y,y);
        if(y>x)return HCF(x,y-x);
    }
    return x;
}

int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\n\nHCF of the two given numbers is : %d",HCF(a,b));
    return 0;
}