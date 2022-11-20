#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 100

 main()
{
    char A[size];
    int i,s,w,n;
    i=n=s=w=0;

    printf("\n\nEnter a sentence :\nCounting numbers, strings, alphabets\n");
    fgets(A, sizeof A, stdin);

    while(A[i]!= '\0')
    {
        if(  (A[i] >= 'a' && A[i] <= 'z')  ||  (A[i] >= 'A' && A[i] <= 'Z')  )
        
        {w++;}

        else if( A[i] >= '0' && A [i] <= '9')
        {n++;}

        else 
        {
            s++;
        }

        i++;
    }

    printf("\n\nYour AlphabetsS : %d\nnumbers : %d\nstring : %d",w,n,s);
}