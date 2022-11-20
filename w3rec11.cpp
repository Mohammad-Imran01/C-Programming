#include<stdio.h>
int dectobin(int x)
{
    if(x==0)return 0;
    return(x%2)+10*dectobin(x/2);
}
int main()
{
    int x= 5;
    printf("Binary form of %d is %d",x,dectobin(x));return 0;
}