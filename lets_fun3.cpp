#include<stdio.h>
isLeap(int x)
{
   if((x%4 == 0) && (x % 100 != 0) || (x%400==0)) printf("Leap year!!\n\n");
   else printf("Not a Leap year!!\n\n");
}

int main()
{
    int x;
    printf("Enter a year!\n");
    scanf("%d",&x);
    isLeap(x);
    return 0;
}