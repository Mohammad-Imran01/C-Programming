/*(d) Write a program which performs the following tasks:
 Initialize an integer array of 10 elements in main( )
 Pass the entire array to a function modify( )
 In modify( ) multiply each element of array by 3
 Return the control to main( ) and print the new array elements
in main( )*/

#include<stdio.h>
int modify(int A[])
{
    for(int i=0;i<10;i++)
    {
        A[i] = A[i]*3;
    }
}
int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    modify(A);
    for(int i = 0;i<10;i++)
    {
        printf(" %d",A[i]);
    }
    return 0;
}
