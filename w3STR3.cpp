#include<stdio.h>
int main()
{
    int i=0,j=0;
    char str[50];
    printf("Enter String:\n");

    fgets(str , sizeof str , stdin);

    while(str[j]!= '\0')
    {
        printf("%c ",str[j]);
        j++;
    }
   

    return 0;
}