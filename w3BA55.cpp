#include<stdio.h>

int sum(int A[],int x)
{
    int i,sum,stop;
    for(i=0;i<x;i++)
    {
        if(A[i]==5)
                stop = 1;
        if(stop && A[i]==6)
                stop=0;
        else if (!stop) 
            sum+=A[i];
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
     printf("\nNumber of even elements in your Array = %d",sum(A,x));

    return 0;


}