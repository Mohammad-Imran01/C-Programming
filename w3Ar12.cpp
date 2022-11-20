#include<stdio.h>
int main()
{
    int x,i,j,temp;
    printf("Enter Array size : ");
    scanf("%d",&x);
    int A[x];
    
    printf("\nFill the Array with %d elements\n",x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j]= temp;
            }
        }
       
    }
    printf("\nIn descending order sorted Array is printed below :\n");
    for(i=0;i<x;i++)
    {
         printf("%d ",A[i]);
    }
return 0;
}