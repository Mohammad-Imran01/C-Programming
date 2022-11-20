#include<stdio.h>
int main()
{
   int A[10],temp,j,i;
   int B[10];
   printf("Fill Array 1 :\n");
   for(int i=0;i<10;i++)
   {
      scanf("%d",&A[i]);
   }
   for(int i=0;i<10;i++)
   {
      printf("%d ",A[i]);
   }
   printf("\nFill Array 2 :\n");
   for(int i=0;i<10;i++)
   {
      scanf("%d",&B[i]);
   }
   for(int i=0;i<10;i++)
   {
      printf("%d ",B[i]);
   }


   int C[20];
   for(int i=0;i<20;i++)
   {
      if(i<10)
      C[i] = A[i];
      if(i>9)
      C[i] = B[i-10];
   }
   
   for(int i=0;i<20;i++)
   {
      printf("%d ",C[i]);
   }
   for(i=0;i<20;i++)
   {
      for(j=0;j<20;j++)
      {
         if (C[i] > C[j])
         {
            temp = C[i];
            C[i] = C[j];
            C[j] = temp;
         }
      }
   }
   printf("\n\nThird and merged Array \n");
   for(i=0;i<20;i++)
   {
      printf("  %d",C[i]);
   }

   return 0;
}