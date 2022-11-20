/*     Twenty-five numbers are entered from the keyboard into an array.
The number to be searched is entered through the keyboard by the
user. Write a program to find if the number to be searched is
present in the array and if it is present, display the number of times
it appears in the array      */

#include<stdio.h>
int main()
{
    int i,x=0,y=0,c,d;
    int A[25];
  
    printf("Fillup the Array :\n");
    for(i=0;i<25;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("\nEnter two numbers to search : c,d\n");
    scanf("%d%d",&c,&d);

    for(i=0;i<25;i++)
    {
        if(A[i] == c) x++;
        if(A[i] == d) y++;
    }
    printf("First number i.e %d found for %d times\n",c,x);
    printf("Second number i.e %d found for %d times\n",d,y);
    return 0;
}