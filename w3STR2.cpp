#include<stdio.h>
int main()
{
    int i=0;
    char str[50];
    printf("Enter String:\n");

    fgets(str , sizeof str , stdin);

    while(str[i]!= '\0')
    {
        i++;
    }
    printf("Lenght is %d",i-1);

    return 0;
}