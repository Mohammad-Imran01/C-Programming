#include<stdio.h>
#include<stdlib.h>

int check5(int A[],int x)
{
    int five=0;
    for(int i=0;i<x-1;i++)
    {
    
    if( A[i] == 5 && A[i+1] == 5 )
        five++;
    }
    return five;
}

int check6(int A[],int x)
{
    int six=0;
    for(int i=0;i<x-1;i++)
    {
        if(A[i] == 5 && A[i+1] == 6)
         six++;
    }
    return six;
}
int main()
{
    int i,x,five,six;

    printf("Enter the size of Array : ");
    scanf("%d",&x);

    int A[x];

    for(i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Note: There is '%d' 5 after 5:\n",check5(A,x));
    printf("Note: There is '%d' 6 after 5:\n",check6(A,x));
    return 0;


}