#include<stdio.h>
int main()
{
    int wind_speed;
    printf("Enter wind Speed : ");
    scanf("%d",&wind_speed);
    if(wind_speed > 73 && wind_speed < 155)
    {
    if (wind_speed < 96 && wind_speed > 73) printf("\n'I' Hurricane category :");
    if (wind_speed < 111 && wind_speed > 95) printf("\n'II' Hurricane category :");
    if (wind_speed < 131 && wind_speed > 110) printf("\n'III' Hurricane category :");
    if (wind_speed < 155 && wind_speed > 130) printf("\n'IV' Hurricane category :");
    if (wind_speed  == 155) printf("\n'V' Hurricane category :");
    }
    else
    printf("\nInput Out of range :");

    return 0;

    
}