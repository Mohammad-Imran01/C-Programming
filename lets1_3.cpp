#include<stdio.h>
int main()
{
    int marks1;int  marks2; int marks3;
    int marks4; int marks5; float perct,agg;

    printf("Enter marks of 5 subjects :\n");
    scanf("%d %d %d %d %d",&marks1,&marks2,&marks3,&marks4,&marks5);

    agg = ( marks5 + marks4 + marks3 + marks2 + marks1);

    printf("Aggregate marks of these subjects : %0.2lf",agg/5);
    printf("\nPercentage is : %0.2lf",(agg/500)*100);
    return 0;

}