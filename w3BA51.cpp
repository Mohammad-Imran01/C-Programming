#include<stdio.h>

int check(int A[],int x)
{
    int count = 0;
    for(int i=0;i<x;i++)
    {
        if(A[i]%2 == 0)
        {
            count++;
        }
    }
    return count;
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
     printf("\nNumber of even elements in your Array = %d",check(A,x));

    return 0;


}