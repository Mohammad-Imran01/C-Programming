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
        for(j=0;j<x;j++)
        {
            if(A[i]>A[j])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1]= temp;
            }
        }
    }
    printf("\nIn acsending order sorted Array is printed below :\n");
    for(i=0;i<x;i++)
    {
        printf("%d ",A[i]);
    }
return 0;
}