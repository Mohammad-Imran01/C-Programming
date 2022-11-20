#include<stdio.h>
int count(int x,int z)
{
    if (x==0)return z;
    count(x/=10,z+=x%10);
}
int main()
{
    int x,z;
    printf("Enter any number : ");
    scanf("%d",&x);
    printf("\n\nSum of digits of given number is : %d\n\n",count(x,0));
    return 0;    
}