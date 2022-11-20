#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int ab,bc,ac;
    float area,height,s;

    printf("Enter 3 sides of the triangle:\n");
    scanf("%d%d%d",&ab,&bc,&ac);

   s = (ab+bc+ac)/2;

    printf("\nSemi-primeter : %.2f\n",s);

   area = sqrt(s*(s-ab)*(s-bc)*(s-ac));
   printf("Area of the triangle is : %.1f",area);

   return 0;
}
