#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  char st[100];
  int i=0,j=0;

  printf("Enter you string:\n");
  fgets(st , sizeof st, stdin );

  j = strlen(st);

  for(st[j]='\0' ; j >=0 ; j--)
  {
      printf("%c ",st[j]);
  }
  return 0;

}