#include<stdio.h>
#include<math.h>

int main()
{
    float deg,radian;
    const float PI = 3.141592;

    printf("Enter the value of degree :\n");
    scanf("%f",&deg);

    radian =  deg*(PI/180.0);

    printf("\nSin(%.1f) = %.2f\n",deg,sin(radian));
    printf("Cos(%0.1f) = %0.2f\n",deg,cos(radian));
    printf("Tan(%0.1f) = %0.2f\n",deg,tan(radian));
    printf("Cot(%0.1f) = %0.2f\n",deg,1/tan(radian));
    printf("Sec(%0.1f) = %0.2f\n",deg,1/cos(radian));
    printf("Cosec(%.1f) = %0.2f\n",deg,1/sin(radian));
    return 0;








}