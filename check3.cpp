#include<stdio.h>

int check_three ( int x)
{
    int remainder;
    int count = 0;
    while(x>0)
    {
        remainder = x %10;
        x/=10;
        if(remainder == 3)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int x;
    printf("Enter a seven digit number:\n");
    scanf("%d",&x);
    printf("Number of three is: %d", check_three(x) );
    return 0;
}