#include<stdio.h>
int Enter_25(int A[])
{
    printf("Fill up the Array bruh!!\n");
    for(int i=0;i<25;i++)
    {
        
        scanf("%d",&A[i]);
    }
}
int checkup(int A[])
{
    int pos=0,neg=0,odd=0,even=0;
    for(int i=0;i<25;i++)
    {
        if(A[i] < 0) neg++;
        if(A[i] >= 0 ) pos++;
        if(A[i]%2 == 0) even++;
        if(A[i] %2 != 0) odd++;
    }
    printf("\nIn the given Array:\nPositive num = %d\nNegative num = %d\nEven num = %d\nOdd num = %d\n\n\n",pos,neg,even,odd);
}

int main()
{
    int A[25];
    Enter_25(A);
    checkup(A);
    return 0;
}