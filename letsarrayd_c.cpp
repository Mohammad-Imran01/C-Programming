#include<stdio.h>
int take100(int A[])
{
    printf("Fill up Array : \n");
    for(int i = 0; i< 100; i++)
    {
        A[i] = i+1;
    }
    for(int i=0;i<100;i++)
    {
        if(i%5 ==0) printf("\n");
        printf("  %d",A[i]);
    }
    
}

int isPrime(int A[])
{
    int i,j;
    for(i=1;i<100;i++)
    {
        for(j=1;j<100;j++)
        {
            
            if( A[i] && A[j] &&  j<i && A[i] % A[j] == 0  && A[i]!=A[j])
            {
                A[i] = 0;
            }
        }
    }
    printf("\n\n Between 1 and 100 prime numbers are :\n");
    for(i=0;i<100;i++)
    {
        if(i%25 == 0 ) printf("\n");
        if (A[i]!=0) printf(" %d",A[i]);
    }
}
int main()
{
    int A[100];
    take100(A);
    isPrime(A);
    return 0;
}