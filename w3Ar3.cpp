#include<stdio.h>
int main()
{
    int x,max;
    printf("Enter size of the Array : ");
    scanf("%d",&x);  int A[x];

    printf("Fill the Array : \n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
        
    }
    max = A[0];
    printf("\n");

    for(int i=0;i<x;i++)
    {  printf(" %d ",A[i]);
        max = max > A[i] ? max :A[i];
        
    }
    printf("\nMax element of the Array : %d",max);
    int H[max+1];
    for(i=0;i<max+1;i++)
    {
        H[i] = 0;
    }
    
    for(int z=0;z<max+1;z++)
    {
        H[i]=
    }
    return 0;
}
