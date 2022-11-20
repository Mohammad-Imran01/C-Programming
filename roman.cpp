#include<stdio.h>
int main()
{
    int n,i;
    printf("Decimal Roman\n");
    printf("number  numerals\n");
    printf("-----------------");

    for(i=1;i<=100;i++)
    {
        n = i;
        printf("  %d         ",i);

        while (n!= 0)
        {
            if(n>=1000)
            {
                printf("M");
                n-=1000;
            }
            if(n >= 900)
            {
                printf("CM");
                n -= 900;
            }
            if (n >= 500)
            {
                printf("D");
                n -= 500;
            }
            if (n >= 400)
            {
                printf("CD");
                n -= 400;
            }
            if (n >= 100)
            {
                printf("C");
                n -= 100;
            }
            if (n >= 90)
            {
                printf("XC");
                n -= 90;
            }
            if (n >= 50)
            {
                printf("L");
                n -= 50;
            }
            if (n >= 40)
            {
                printf("XL");
                n -= 40;
            }
            if(n >= 10)
            {
                printf("X");
                n -= 10;
            }
            if (n >= 9)
            {
                printf("IX");
                n -= 9;
            }
            if (n >= 5)
            {
                printf("V");
                n -= 5;
            }
            if (n >=4)
            {
                printf("IV");
                n -=4;
            }
            if (n >= 1)
            {
                printf("I");
                n -= 1;
            }
            
         }
         printf("\n");
        
    }
    return 0;
}