/*
How will you initialize a three-dimensional array threed[ 3 ][ 2 ][ 3]?
How will you refer the first and last element in this array? */
#include<stdio.h>
int i,j,k,t=1;
int main()
{
   int A[3][2][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                A[i][j][k]=t;t++;
            }
        }
    }



    printf("  %d",A[0][0][0]); printf("  %d",A[2][1][2]);
return 0;
}