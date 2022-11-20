#include<stdio.h>
int main()
{
    int i,j=9;
    int A[10],B[10];
    for(i=0;i<10;i++)
    {
        A[i] = i+1;
    }
    while(j>-1){
    for(i=0;i<10;i++)
    {
        B[j]=A[i];j--;
    }
    }






    
    for(i=0;i<10;i++)
    {
    printf(" %d",A[i]);
    }
    for(i=0;i<10;i++)
    {
    printf(" %d",B[i]);
    }
    return 0;

}