#include<stdio.h>
#include<stdlib.h>

int test(int x)
{
    return ( x % 3 == 0 && x % 7 != 0 || x % 3 != 0 && x % 7 == 0  );
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