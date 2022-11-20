#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter size of the Array : ");
    scanf("%d",&x);
    int A[x],B[x];
    printf("Fill the Array : \n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    for(int i=0;i<x;i++)
    {
        B[i] = A[i] ;
        printf("\n A[%d] = %d && B[%d] = %d ",i,A[i],i,B[i]);
    }
    printf("\nSum of the Array : %d",sum);
    return 0;
}
