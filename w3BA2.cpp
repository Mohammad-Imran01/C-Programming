#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of 'n' :\n");
    scanf("%d",&x);

    if (x>51)
    {
        printf("%d",(3*(x-51)));
    }
    else
    printf("%d",(51-x));
    
    return 0;
}