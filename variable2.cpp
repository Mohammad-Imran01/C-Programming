#include<stdio.h>
#include<stdlib.h>

int main()
{
    char num[123];
    unsigned long numb;
    printf("\n\n\n\nEnter a number:\n");
    fgets(num,sizeof num,stdin);

    numb = strtoul(num,NULL,0);
    printf("output: %lu",numb);

    return 0;
}