#include<stdio.h>

int sum_of_n(int n)
{
    if(n <= 0)
        return 0;
    
    return sum_of_n(n-1)+n;
}
int main()
{
    printf("%d",sum_of_n(5));
}