#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{

int i = 0 , vov = 0 , cons = 0;
char A[100];

printf("Enter a string:\n");
fgets(A,sizeof A,stdin);

while(A[i] !='\0')
{
    if ( (A[i] == 'a') || (A[i] == 'e') || (A[i] == 'i') || (A[i] == 'o') || (A[i] == 'u') || (A[i] == 'A') || (A[i] == 'E') || (A[i] == 'I') || (A[i] == 'O') || (A[i] == 'U') )
     vov++;

    else if( (A[i] >= 'a' && A[i] <= 'z' ) || ( A[i] >='A' && A[i] <= 'Z') ) 
     cons++;

    i++;
}
 
 printf("No. of:\nVowels = %d\nConsonant = %d",vov,cons);

}