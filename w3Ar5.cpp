#include<stdio.h>
int i,j;
void Array1(int A[],int x,int *max)
{
   printf("Fill the Array : \n");
    for( i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    } *max = A[0];
    for( i=0;i<x;i++)
     {  
         printf(" %d ",A[i]);
         *max = *max > A[i] ? *max :A[i];
     }
}
void finder(int A[],int H[],int x, int y)
{
    int m;
    for( i = 0;i<x;i++)
    {
           m = A[i];
           H[m]+=1;
           //printf("\n%d times %d",i,H[i]);
    }
}
int main()
{
    int x,y,max;
    printf("Enter size of the Array : ");
    scanf("%d",&x);  int A[x];
    Array1(A,x,&max);
    
    printf("\nMax element of the Array : %d",max);
    j=max+1;
    int H[j];
    printf("\n");
    for(i=0;i<j;i++)
    {
        H[i] = 0;
        //printf("%d ",H[i]);
    }
    printf("\n");
    finder(A,H,x,j);
    for(i=0;i<j;i++)
    {
        if (H[i]>1)
            printf("\n%d comes %d times",i,H[i]);
    }
    
    return 0;
}
