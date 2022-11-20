#include<stdio.h>
int i,j,k;
void filler(int p[][5],int x,int y)
{
    printf("Fill up you 5X5 Matrix :\n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        scanf("%d",&p[i][j]);
    }
}
void find(int (*p)[5],int x,int y)
{
    int max = p[0][0];
    for(i=0;i<x;i++)
    {   
        for(j=0;j<y;j++){
        max = max > p[i][j] ? max : p[i][j];}
    }
    printf("In 5X5 Matrix max element is: %d\n",max);
}

int main()
{
    int A[5][5];
    filler(A,5,5);
    find(A,5,5);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
           printf("  %d",A[i][j]);
        }printf("\n");
    }
    return 0;

}