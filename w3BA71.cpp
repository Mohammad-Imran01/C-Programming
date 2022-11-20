#include<stdio.h>  
int main()
{ 
    int x,i,y=0,j=0;
    printf("Enter size of array:\n");
    scanf("%d",&x);
   int A[x-1],B[x-1];

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
   
    for(i=0;i<x;i++)
    {
        if(A[i]==0)
        {
        B[j]=0;
        j++;
        }
    }
    
    for(i=0;i<x;i++)
    {
         if(A[i]!=0)
        {
        B[j]=A[i];
        j++;
        }
    }

    printf("\n");

    for(i=0;i<x;i++)
    {
        printf("%d ",B[i]);
    }
 return 0;
}