#include<stdio.h>
#include<math.h>

int main()
{
    int C,D;

    printf("Enter values C and D:\n");
    scanf("%d%d",&C,&D);
    printf("\nInput C : %d and Input D : %d\n",C,D);

    C+=D;
   D = C-D;
   C = C-D;

   printf("New C : %d and New D : %d\n",C,D);
 return 0;
}