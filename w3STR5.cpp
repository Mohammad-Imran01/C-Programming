#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,l=0;
    char ch[100];

    printf("Enter your name:\n");
    fgets(ch , sizeof ch, stdin);

   while(ch[i] != '\0')
   {
       if(ch[i]==' ' || ch[i]== '\n' || ch == '\t')
       l++;
   }
    printf("%d",l);
    return 0;
    
}