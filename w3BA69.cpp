#include<stdio.h>  
int main()
{ 
    int x,i,y=0;
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
   
   for(i=0;i<x;i++)
   {
       if(A[i]==5);
       {
           y=i;break;
       }
   }
   printf("\n\n");

    if(y!=0)
    {
        for(i=0;i<y;i++)
        {
        printf("%d ",A[i]);
        }
    }
    printf("There is no number to Print:\n");
    return 0;


}