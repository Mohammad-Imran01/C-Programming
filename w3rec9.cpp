#include<stdio.h>
#define MAX 100
char* rostr(char a[])
{
   static int i = 0;
   static char revstr[MAX];
   if(*a)
   {
       rostr(a+1);
       revstr[i++]=*a;
   }
   return revstr;
}
int main()
{
    char a[MAX];
    printf("Enter a string : ");
    scanf("%s",a); //revstr=rostr(a);
    printf("Reversed string is : %s",rostr(a));
    return 0;
}