#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    printf("\n\nIs command processor available?\n");
    if(system(NULL))
    {
        printf("Command prompt available:\n");
    }
    else
    {
        printf("Command prompt not available\n");
        exit (1);
    }
    printf("Executing command DIR\n");
    x = system("dir");
    printf("Returned value is : %d.\n",x);
    return 0;
}