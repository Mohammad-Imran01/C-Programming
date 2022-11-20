#include<stdio.h>
int Add(int A[],int x)
{
    int sum=0;
    for(int i=0;i<x;i++)
    {
        if(A[i]!=17)
        {
            sum+=A[i];
        }
    }
    return sum;
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
     printf("\n%d ",Add(A,x));

    return 0;


}