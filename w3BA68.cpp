#include<stdio.h>

int Has(int A[],int x)
{
    int i,B[x-2];
   
    

    for(i=0;i<x;i++)
    {
        if(i==x-1)
        {
            printf("\n%d",A[0]);break;

        }
        B[i]=A[i+1];
        printf("\n%d",B[i]);
    }
    
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