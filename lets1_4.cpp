#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float feh;
    printf("Enter temperature in Fahrenheit :\n");
    scanf("%f",&feh);

   double cel = ((feh-32)*5)/9;
    printf("In centigrade temp = %.2f",cel);
    return 0;
}