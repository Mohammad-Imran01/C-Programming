#include<stdio.h>
int main()
{
    int km;
    printf("Enter distance in kilometers:\n");
    scanf("%d",&km);
    printf("Given distance is : %d ",km);

    double foot = 3280*km;
    float meters = 1000*km;
    double c_meters = 1000*100*km;
    double inches = 0.0254*meters*1000;

    printf("\n\n%d km = %.2f meters",km,meters);

    printf("\n%d km = %.2lf cms ",km,c_meters);

    printf("\n%d km = %.2lf foot",km,foot);

    printf("\n%d km = %.2lf inches \n\n",km,inches);

    return 0;

    
}