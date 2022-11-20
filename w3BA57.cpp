#include<stdio.h>

int isGreat(int A[],int x)
{
    int i,five=0,three=0;
    for(i=0;i<x;i++)
    {
        if(A[i]==5)
               five++;
        if(A[i]==3)
                three++;
       
    }
    if (five<three) return 1;
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
     printf("\n%d",isGreat(A,x));

    return 0;


}