#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);

    x = abs(x);
    printf("Abs value is %d",x);

    return 0;
}