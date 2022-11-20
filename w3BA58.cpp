#include<stdio.h>

int Has(int A[],int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        if(A[i]!=3 && A[i]!=5)return 0;
              
    }
    return ;
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
     printf("\n%d",Has(A,x));

    return 0;


}