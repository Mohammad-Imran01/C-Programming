#include<stdio.h>

int main()
{
    int A[]={1,2,3},B[]={4,5,6};
    int i;
    int C[5];
    printf("Array 1:\n%d %d %d\n",A[0],A[1],A[2]);
    printf("Array 2:\n%d %d %d\n",B[0],B[1],B[2]);
    printf("New Array:\n%d %d %d %d %d %d",A[0],A[1],A[2],B[0],B[1],B[2]);

    return 0;
}