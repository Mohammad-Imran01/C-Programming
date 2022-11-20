#include<stdio.h>
int insertion(int A[],int x)
{
    int i,j,z;
   for(i=0;i<x;i++)
   {
        z = A[i];
        j=i-1;
        while( j > -1 && A[j]>z)
            {
                A[j+1] = A[j];
                j--;
            } 
            A[j+1] = z;
     
   }
   for(i=0;i<x;i++)
   {
       printf("%d ",A[i]);
   }
}
int main()
{
    int x,i;

    printf("Enter size of Array : ");
    scanf("%d",&x);
    
    int A[x];
    
    printf("Fill up the Array : \n");
    for(i =0 ; i<x; i++)
    {
        scanf("%d",&A[i]);
    }   
   
   insertion(A,x);
    return 0;
}
