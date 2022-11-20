#include<stdio.h>
int bubble(int A[],int x)
{
    int temp=0,i,j;
    for(j=0;j<x;j++)
    {
    for(i=0;i<x;i++)
    {
        if(A[i+1]<A[i]) 
        {
            temp = A[i+1];
            A[i+1]=A[i] ;
            A[i] = temp;
            
        }
    }
    }
    for(i=0;i<x;i++)
    {
    printf("\nA[%d] = %d",i,A[i]);
    }
}
int main()
{
    int x;
    int i;
    printf("Enter size of Array : ");
    scanf("%d",&x);
    int A[x];
    printf("Fill up the Array : \n");
    for(i =0 ; i<x; i++)
    {
        scanf("%d",&A[i]);
    }   
    bubble(A,x);
    return 0;
}
