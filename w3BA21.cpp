#include<stdio.h>
#include<stdlib.h>

int test(int x)
{
    return ( x % 10 == 0 || x % 20 == 0 || x % 30 == 0  );
}

int main()
{
    int x;
    printf("Enter a +ve number:\n");
    scanf("%d",&x);

    if(x>0)
    {
     printf("%d",test(x));
    }
    else
        printf("Inavlid number");
    return 0;
}