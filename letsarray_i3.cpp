/*Write a program using pointers to find the smallest number in an
array of 25 integers*/
#include<stdio.h>

int Fill_This(int A[],int x)
{
    printf("Fill the Array :\n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }
}
void check_smallest(int A[],int size,int *smallest)
{
    for(int i=0;i<size ; i++)
    {
        *smallest = A[i]<*smallest ? A[i]:*smallest;
    }
}

main()
{
    int x,i,small;
    printf("Enter the size : ");
    scanf("%d",&x);
    int A[x];

    Fill_This(A,x);
    small = A[0];
    check_smallest(A,x,&small);
    printf("%d",small);

}