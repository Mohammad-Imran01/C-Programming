#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year : ");
    scanf("%d",&x);

    if(x%4==0)
    {
        if(x%100==0)
        {
            if(x%400==0)
            {
                printf("Leap year:\n");

            }
            else printf("No a leap year");
        }
        else printf("Leap year");
    }
    else printf("Not a leap year");

    return 0;

}