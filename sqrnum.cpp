#include<stdio.h>
int main()
{
   int i,k,j;
   scanf("%d",&k);

   for(i = 1; i<= k; i++)
   {
       for(j=1;j<=k;j++)
       {
           printf("%d",i);
       }
   }
    return 0;
}