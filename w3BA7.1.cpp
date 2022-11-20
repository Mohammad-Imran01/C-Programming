#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define siz 100

main()
{
    int str,i,num,alp;
    str = i = num = alp = 0;
    char A[siz];

    printf("Calculating strings, numbers, Alphabets :\n");
    fgets(A , sizeof A, stdin);

    while(A[i] != '\0')
    {
        if(A[i] >= 'a' && A[i] <= 'z' || A[i] >= 'A' && A[i] <= 'Z'  )
        {
            alp++;
        }
        else if (A[i] >= '0' && A[i] <= '9' )
        {
            num++;
        }

        else str++;
    }i++;

    printf("\n String : %d\nAlphabets : %d\nNumbers : %d\n",str,alp,num);
    return 0;
}