/*  If an array arr contains n elements, then write a program to check if
arr[ 0 ] = arr[ n-1 ], arr[ 1 ] = arr[ n - 2 ] and so on.  */

#include<stdio.h>

int Fill_This(int A[],int x)
{
    printf("Fill the Array :\n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }
}

int check_me(int A[],int x)
{
    int i=0,j=x-1;
    while(i<x/2 )
    {
        if(A[i] == A[j])
        {
            printf("\nValues %d and %d are equal",A[i],A[j]);
        }
        else
        {
            printf("\nValues %d and %d are not equal",A[i],A[j]);
        }
        i++;
        j--;
        
    }
}

main()
{
    int x,i;
    printf("Enter the size : ");
    scanf("%d",&x);
    int A[x];
    Fill_This(A,x);
    check_me(A,x);

}