#include<stdio.h>
void printer(int A[],int i,int x)
{
    if(i>=x)return;
    printf(" %d",A[i]);
    printer(A,i+1,x);
}

int main()
{
    int A[]={1,2,3,4,5};
    printer(A,0,5);
    return 0;
}