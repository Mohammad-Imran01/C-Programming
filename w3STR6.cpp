#include<stdio.h>

int main()
{
    int i=0;
    char ch[100],sc[100];

    printf("Enter 1st string:\n");
    fgets(ch , sizeof ch, stdin);

    printf("Enter 2nd string:\n");
    fgets(sc , sizeof sc, stdin);

    printf("%d ",isEqual(sc,ch));

    return 0;
}
   
   int isEqual(char* sc, char* ch)
   {
    for(int i=0;i<='\0';i++)
    {
        if(ch[i]!=sc[i])
        return 0;

    }
    return 1;
    
   }


