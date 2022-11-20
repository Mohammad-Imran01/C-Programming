/*Write a program to obtain transpose of a 4 x 4 matrix. The
transpose of a matrix is obtained by exchanging the elements of
each row with the elements of the corresponding column*/
#include<stdio.h>
int i,j;
void filler(int p[][4],int x,int y)
{
    printf("Fill up you 4X4 Matrix :\n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        scanf("%d",&p[i][j]);
    }
}
void printer(int p[][4],int x,int y)
{
    printf("\n\nYour 4X4 Matrix :\n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        printf("  %d",p[i][j]);
        printf("\n");
    }
}
void Tpose(int A[][4],int B[][4],int x, int y)
{
   
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            B[j][i] = A[i][j];
        }
    }
    printf("\n\nTranspose of the matrix :\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("  %d",B[i][j]);
        }printf("\n");
    }
}

int main()
{
    int A[4][4];
    int B[4][4];
    filler(A,4,4);
    printer(A,4,4);
    Tpose(A,B,4,4);
    return 0;

}