//Consider a currency system in which there are notes of seven 
//denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If 
//a sum of Rs. N is entered through the keyboard, write a program to 
//compute the smallest number of notes that will combine to give Rs. 

#include<stdio.h>
#include<math.h>

int main()
{
    int x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x=0;
    printf("\nEnter the value of x : \n");
    scanf("%d",&x);

    x1 = x/100; //100
    x = (x - (x1*100));

    x2 = x/50;  //50
     x = (x - (x2*50));

    x3 = x/10;  //10
     x = (x - (x3*10));

    x4 = x/5; //5
     x = (x - (x4*5));

    x5 = x/2; //2
     x = (x - (x5*2));

    x6 = x/1;  //1

    printf("\nx1 = %d,x2 = %d,x3 = %d,x4 = %d,x5 = %d,x6 = %d\n",x1,x2,x3,x4,x5,x6);

    printf("Required number of notes : %d  \n",x1+x2+x3+x4+x5+x6);

    return 0;

}

