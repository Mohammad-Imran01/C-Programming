#include<stdio.h>
int main()
{
    int A[]={1,2,3};
    int B[]={4,5,6};
    int C[3];

    printf("First Array:\n%d %d %d",A[0],A[1],A[2]);
    printf("\nSecond Array:\n%d %d %d\n",B[0],B[1],B[2]);

    for(int i = 0; i<3+1 ; i++)
    {
        if(i<3)
        {
        C[i]=B[i];
        }

        if(i==3)
        {
            C[3]=A[1];
        }

    }
     printf("New Array!\n ");
    for(int i=0;i<4;i++)
    {
        printf("%d ",C[i]);
    }
    return 0;
}