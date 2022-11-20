#include<stdio.h>
#include<stdlib.h>

int  check(int A[],int x)
{
    for(int i=0;i<x-1;i++)
    {
        if(A[i]==1 && A[i+1] == 2 && A[i+2]==3)
        return 1;
    }
    return 0;

}

int main()
{
    int i,x;
    
    printf("Enter size of array:\n");
    scanf("%d",&x);int A[x-1];

    for(i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<x;i++)
    {
        printf("%d  ",A[i]);
    }

    printf("%d",check(A,x));
}