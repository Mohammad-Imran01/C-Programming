#include<stdio.h>

int check(int A[],int x)
{
    if( A[0]>A[x/2] && A[0]>A[x-1] )
        return A[0];

    if( A[0]<A[x/2] && A[x/2]>A[x-1 ])
        return A[x/2];

    if( A[0]<A[x-1] && A[x/2]<A[x-1] )
        return A[x-1];
    
}

int main()
{
    int x;
    printf("Enter size of array:\n");
    scanf("%d",&x);
    int A[x-1];

    printf("Fill up the Array:\n");
    for(int i=0;i<x;i++)
    {
            scanf("%d",&A[i]);
    }

    printf("\nYour Array:\n");

     for(int i=0;i<x;i++)
     {
         printf("%d ",A[i]);
     }
     printf("\nLargest element in your Array:\n%d",check(A,x));

    return 0;


}