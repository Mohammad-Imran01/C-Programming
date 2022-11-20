#include<stdio.h>
int main()
{
    int x,z=0;
    printf("Enter a five digit number:\n");
    scanf("%d",&x);

        z+=x%10;
        x/=10;
         z+=x%10;
        x/=10;
         z+=x%10;
        x/=10;
         z+=x%10;
        x/=10;
         z+=x%10;

    printf("Sum of the digits of the numbers is %d",z);
    return 0;

}