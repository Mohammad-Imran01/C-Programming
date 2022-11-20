#include<stdio.h>
#include<stdlib.h>

int isTriple(int A[],int x)
{
    for(int i=0;i<x;i++)
    {
       if(A[i]==A[i+1] && A[i+2] == A[i])
        return 1;
    }
    return 0;
}

int main()
{
    int i,x;

    printf("Enter the size of Array : ");
    scanf("%d",&x);

    int A[x];

    for(i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("%d",isTriple(A,x));
    return 0;
}