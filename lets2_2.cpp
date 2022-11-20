#include<stdio.h>
int main()
{
    int x;
    int z=0;
    printf("Enter a five digit number:\n");
    scanf("%d",&x);
   int a=x;
  
    z = z*10+x%10;
    x/=10;
      z = z*10+x%10;
    x/=10;
      z = z*10+x%10;
    x/=10;
      z = z*10+x%10;
    x/=10;
      z = z*10+x%10;

      printf("\n\nrev of %d is %d :\n\n\n",a,z);
      return 0;
}