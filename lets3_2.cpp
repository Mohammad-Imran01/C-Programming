#include<stdio.h>
int main()
{
    printf("Enter a numb \n");
    int x;
    scanf("%d",&x);

    if(x<0) printf("Odd");
    if(x>0) printf("EVEN");
    return 0;
}