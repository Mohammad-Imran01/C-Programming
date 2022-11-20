#include<stdio.h>
#include<math.h>
void sorter(int A[],int x)
{
    int i,j,temp;
        printf("\nFill the Array with %d elements\n",x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(A[j] < A[i])
            {
                temp = A[j];
                A[j] = A[i];
                A[i]= temp;
            }
        }
    }
    printf("\nIn acsending order sorted Array :");
    for(i=0;i<x;i++)
    {
        printf(" %d",A[i]);
    }
    printf("\n");
}
int main()
{
    int x,i,pos=0,num;
    printf("Enter Array size : ");
    scanf("%d",&x);
    int A[100];
    sorter(A,x);
    printf("Enter a number to insert in a sorted position: ");
    scanf("%d",&num);

    for(i=0;i<x;i++)
    {
        if(num < A[i] && A[i+1] >= num   )
        {
            pos=i;
            break;
        }
            
        
    }
    printf("\npos = %d\n",pos);}

     for(i=x;i>=pos;i--)
    {
        A[i] = A[i-1];
    }
    A[pos] = num;
     printf("\nIn acsending order  sorted Array after insertion :");
    for(i=0;i<=x;i++)
    {
        printf(" % 2d",A[i]);
    }
    printf("\n");


return 0;
}