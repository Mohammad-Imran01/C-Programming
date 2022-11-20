#include<stdio.h>
int iseven(int x,int y)
{
    while(x<=y)
    {
    if(x%2==0)
    { printf("%d is Even\n",x);
    return iseven(x+1,y);}

    if(x%2!=0)
    { printf("%d is Odd\n",x);return iseven(x+1,y);}
}}
int main()
{
    int a,b;
    printf("Check from : \n");
    scanf("%d",&a);
    printf("Check to : \n");
    scanf("%d",&b);
    iseven(a,b);
    return 0;
}