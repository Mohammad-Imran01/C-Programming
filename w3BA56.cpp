#include<stdio.h>

int sum(int A[],int x)
{
    int i,sum=0,stop;
    for(i=0;i<x;i++)
    {
        if(A[i]==5)sum+=A[i];
    }
    if(sum == 15) return 1;
    return 0;
}   
int main()
{ 
    int x;
    printf("Enter size of array:\n");
    scanf("%d",&x);
   int A[x-1];

    printf("Fill up the Array:\n");
    for(int i=0;i<x;i++)
    {
            scanf("%d",&A[i]);
    }

    printf("\nYour Array:\n");

     for(int i=0;i<x;i++)
     {
         printf("%d ",A[i]);
     }
     printf("\nNumber of even elements in your Array = %d",sum(A,x));

    return 0;


}