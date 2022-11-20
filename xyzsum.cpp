#include<stdio.h>
int main()
{
    long x,y,z;
    printf("Enter the values for : X , Y , Z\n");
    scanf("%lld %lld %lld",&x,&y,&z);

    printf("Sum of (x-y-z)is : %lld",(x+y+z));
    return 0;

}