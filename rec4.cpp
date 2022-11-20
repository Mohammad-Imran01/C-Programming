#include<stdio.h>
void printer(int A[],int i,int x)
{   if (i==x)return ;
    printf(" %d",A[i]);
    printer(A,i+1,x);return ;
}
int main()
{
    int i,x;
    printf("Enter size : ");
    scanf("%d",&x);
    int A[x-1];
    printf("\nFill up the Array :\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }
     printer(A,0,x);
 
}