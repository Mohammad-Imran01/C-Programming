#include<stdio.h>
int main()
{
    int x;
    printf("Enter size of the Array : ");
    scanf("%d",&x);
    int A[x];
    printf("Fill the Array : \n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=x-1;i>=0;i--)
    {
        printf(" %d ",A[i]);
    }
    return 0;
}
