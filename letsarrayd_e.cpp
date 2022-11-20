#include<stdio.h>
int interchanging_them(int A[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        if(A[i] < 0)
        {
            temp=A[i];
            for(j=0;j<size;j++)
            {
                if(A[j]>=0)
                {
                    A[i]=A[j];
                    A[j]=temp;
                    break;
                }
            }
        }
    }
    printf("\nInterchanged Array is : \n");
    for(i=0;i<size;i++)
    {
        printf(" %d",A[i]);
    }
}
int main()
{
    int x,i;
    printf("Enter Size of the Array :\n");
    scanf("%d",&x);
    int A[x];

    printf("Fill up the Array :\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }
    interchanging_them(A,x);
    return 0;
}