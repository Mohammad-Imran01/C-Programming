#include<stdio.h>

int Has(int A[],int x)
{
    int i,y=0,n=0;
    for(i=0;i<x;i++)
    {
        if(A[i] % 2 == 0 && A[i+1] % 2 == 0 || A[i] % 2 != 0 && A[i+1] % 2 != 0)
        y++;
        else
            n++;
    }
    if(n==0) return 1;
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
     printf("\n = %d",Has(A,x));

    return 0;


}