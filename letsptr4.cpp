#include<stdio.h>
void changer(int *a,int *b,int *c)
{
    int temp;
    temp = *c;
    *c   = *b;
    *b   = *a;
    *a   = temp;
}
int main()
{
    int x,y,z;
    printf("Enter the values of : X Y Z \n");
    scanf("%d%d%d",&x,&y,&z);
    changer(&x,&y,&z);
    printf(" B = %d\n C = %d\n A = %d",y,z,x);
    return 0;
}