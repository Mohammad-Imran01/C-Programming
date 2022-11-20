//    Write a recursive function to obtain the running sum of first 25 natural numbers:

#include<stdio.h>
int sum(int x)
{   if (x<1) return 0;
    return x+=sum(x-1);
}
int main()
{
    printf("\n\n\n\n1.REC-Sum of first 25 natural number is %d\n\n\n\n\n\n\n\n\n\n",sum(25));
    return 0;
}