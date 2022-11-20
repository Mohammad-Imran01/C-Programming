#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max_siz 100
#define max_allw 255

void main()
{
    char S[str_size];
    int C[max_allw];
    int i=0,max;
    int ascii;

        printf("Find maximum occuring character in a string :\n");
        fgets(S, sizeof S,stdin);

        for(i=0;i<max_allw; i++)
        {
            C[i] = 0;
        }
        i=0;

        while(S[i] != '\0')
        {
            ascii = (int)str[i];
            C[ascii] +=1;
            i++;
        }

        max =0 ;
        for(i=0;i<C;i++)
        {
            if(i != 32)
            {
                if(C[i] > C[max])
                max = i;
            }
        }

printf("\nMaximum occured character is '%c' for %d times :\n");


}