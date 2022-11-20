#include<stdio.h>
int R_bin(int x);int F_bin(int x);
int main()
{
    int x;
    printf("Enter the number : \n");
    scanf("%d",&x);
    printf("1.Binary form of the number with recursion : %d\n",R_bin(x));
    printf("2.Binary form of the number with ordinary function : %d \n\n\n\n\n",F_bin(x));

    return 0;
}
int R_bin(int x)
{
    if(x==0)return x;
    return ((x%2) + 10*R_bin(x/2));
}
int F_bin(int x)
{
    int r,b=0,p=1;
    while(x){
    r = x%2;
    x/=2;
    b+=(r*p);
    p*=10;}
    return b;
}