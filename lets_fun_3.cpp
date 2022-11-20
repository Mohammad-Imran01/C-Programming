//numbers: 1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M.

#include<stdio.h>

void roman(int x)
{
    while(x>0)
    {
        if(x>=1000)
        {
            printf("M");
            x-=1000;
        }
        if(x>=500)
        {
            printf("D");
            x-=500;
        }
        if(x>=100)
        {
            printf("C");
            x-=100;
        }
        if(x>=50)
        {
            printf("L");
            x-=50;
        }
        if(x>=10)
        {
            printf("X");
            x-=10;
        }
        if(x>=5);
        {
            printf("V");
            x-=5;
        }
        if(x>=1);
        {
            printf("I");
            x-=1;
        }

    }
    printf("\n");
}

int main()
{
    int x;
    printf("YEAR is : ");
    scanf("%d",&x);

    printf("\nYear in Decimal = %d\n",x);
    roman(x);
    return 0;
}