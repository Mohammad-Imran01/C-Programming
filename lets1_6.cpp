#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int side1 = 1189,side2 = 841;

    printf("\n\nPaper A[0] is of Dimensions of 1189mm X 841mm\n");

    for(int i=1;i<9;i++)
    {
        if(side1 > side2 ? side1/=2:side2/=2)
        {
            if(side2>side1)
            {
            printf("\nPaper A[%d] is of Dimensions of (%d mm) X (%d mm) \n",i,side2,side1);}

            if(side1>side2) {printf("\nPaper A[%d] is of Dimensions of (%d mm) X (%d mm) \n",i,side1,side2);}
        }
    }
    return 0;
}
