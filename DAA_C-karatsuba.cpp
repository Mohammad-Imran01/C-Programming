#include<stdio.h>
#include<math.h>

int numlen(int num)
{
    // Too find the number length.
    int flag = 0;
    while (num != 0{
        flag++;
        num /=10;
    }
    return flag;
}
int recintmul(int num)
{   
    int x,y;
    y = num/10;
    x = num;
    
}


int main()
{

    int x;
    printf("Enter A num: ");
    scanf("%d",&x);
    printf("%d",numlen(x));

    return 0;
}