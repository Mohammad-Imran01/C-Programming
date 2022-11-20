#include<stdio.h>
int lcm(int a,int b)
{
    static int m;
    m+=b;
    if((m%a==0) &&(m%b==0))
    {
        return m;
    }
    lcm(a,b);
}
int main()
{
    int x,y;
    printf("Enter two numbers : \n");
    scanf("%d%d",&x,&y);
    printf("%d is LCM of %d and %d",lcm(x,y),x,y);
    return 0;
}