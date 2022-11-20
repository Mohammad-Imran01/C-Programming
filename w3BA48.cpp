#include<stdio.h>

int main()
{
    int B[]={0,0,0};
    int A[]={1,2,3};
    
            
            B[0]=A[2];
            B[1]=A[1];
            B[2]=A[0];
            
        
    printf("%d %d %d ",B[0],B[1],B[2]);
    return 0;
}