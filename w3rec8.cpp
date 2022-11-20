#include<stdio.h>
int Highest(int A[],int i,int size,int max)
{
    while(i<size)
    {
    if(A[i]>max) max=A[i];
    return Highest(A,i+1,size,max);
    }
    return max;
}
int main()
{
    int x,i;
    printf("Enter X : ");scanf("%d",&x);
    int A[x-1];
    printf("\nFill up Array : \n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("\n\n%d is the highest element ",Highest(A,0,x,A[0]));
    return 0;
}