#include<stdio.h>
int natural(int i)
{
   if(i==1)return 1;
   i=i+natural(i-1);
   return i;
}
int main()
{
    int i;
    printf("Enter a number : ");
    scanf("%d",&i);
    printf("%d",natural(i));
    return 0;
}