#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three angles : \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b+c == 180 ) printf("Valid");
    else printf("Invalid");

    return 0;
}