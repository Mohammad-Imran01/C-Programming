#include<stdio.h>
int main()
{
    int A[10];
    printf("Fille the Array : \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf(" %d ",A[i]);
    }
    return 0;
}
