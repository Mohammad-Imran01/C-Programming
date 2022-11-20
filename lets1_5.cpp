#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int breadth,length,radius;
    float peri,area1,area2,circ;

    printf("Enter Length & Breadth of the rectangle :\n");
    scanf("%d %d",&length,&breadth);
    printf("GOOD!!!\n Now enter radius of the circle:\n");
    scanf("%d",&radius);

    peri = 2*(length+breadth);
    area1 = (length*breadth);

    circ = 2*3.14*radius;
    area2 = 3.14*radius*radius;

    printf("\nArea of the rectangle %0.2f\n",area1);
    printf("Perimeter of the rectangle : %0.2f\n",peri);

    printf("Circumference of the circle : %0.2f\n",circ);
    printf("Area of the circle : %0.2f\n",area2);

    return 0;

}