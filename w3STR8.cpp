#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
    char A[100],B[100];
    int i=0;

    printf("Enter string to be copied :\n");
    fgets(A , sizeof A, stdin);

    printf("Your new string : \n");

    while(A[i] != '\0')
    {
        B[i] = A[i];i++;
    }
    B[i] = '\0';

    printf("%s",B);


}