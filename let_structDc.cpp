/*  An automobile company has serial number for engine parts starting
from AA0 to FF9. The other characteristics of parts are year of
manufacture, material and quantity manufactured.
(1) Specify a structure to store information corresponding to a
part.
(2) Write a program to retrieve information on parts with serial
numbers between BB1 and CC6 */
#include<stdio.h>

int i;
struct engine
{
    int year_of_man;
    char material[20];
    int quantity;
}AA[10],BB[10],CC[10],DD[10],EE[10],FF[10];

filler()
{
    printf("\nFill the details of engine parts from AA0 to AA9 :\n");
    {
        for(i=0;i<10;i++)
        {
            printf("\nEnter AA[%d] \nYear of manufacture :",i);
            scanf("%d",&AA[i].year_of_man);

            printf("Material :",i);
            scanf("%s",&AA[i].material);
            
            printf("Quantity :",i);
            scanf("%d",&AA[i].quantity);
        }
    }
    printf("\nFill the details of engine parts from BB0 to BB9 :\n");
    {
        for(i=0;i<10;i++)
        {
            printf("\nEnter BB[%d] \nYear of manufacture :",i);
            scanf("%d",&BB[i].year_of_man);

            printf("Material :",i);
            scanf("%s",&BB[i].material);

            printf("Quantity :",i);
            scanf("%d",&BB[i].quantity);
        }
    }
    printf("\nFill the details of engine parts from CC0 to CC9 :\n");
    {
        for(i=0;i<10;i++)
        {
            printf("\nEnter CC[%d] \nYear of manufacture :",i);
            scanf("%d",&CC[i].year_of_man);

            printf("Material :",i);
            scanf("%s",&CC[i].material);

            printf("Quantity :",i);
            scanf("%d",&CC[i].quantity);
        }
    }
    printf("\nFill the details of engine parts from DD0 to DD9 :\n");
    {
        for(i=0;i<10;i++)
        {
            printf("\nEnter DD[%d] \nYear of manufacture :",i);
            scanf("%d",&DD[i].year_of_man);

            printf("Material :",i);
            scanf("%s",&DD[i].material);
            
            printf("Quantity :",i);
            scanf("%d",&DD[i].quantity);
        }
    }
    printf("\nFill the details of engine parts from EE0 to EE9 :\n");
    {
        for(i=0;i<10;i++)
        {
            printf("\nEnter EE[%d] \nYear of manufacture :",i);
            scanf("%d",&EE[i].year_of_man);
            
            printf("Material :",i);
            scanf("%s",&EE[i].material);
            
            printf("Quantity :",i);
            scanf("%d",&EE[i].quantity);
        }
    }
    printf("\nFill the details of engine parts from FF0 to FF9 :\n");
    {
        for(i=0;i<10;i++)
        {
            printf("\nEnter FF[%d] \nYear of manufacture :",i);
            scanf("%d",&FF[i].year_of_man);

            printf("Material :",i);
            scanf("%s",&FF[i].material);

            printf("Quantity :",i);
            scanf("%d",&FF[i].quantity);
        }
    }
}
printer()
{
    printf("\n\n");
    printf("Details of Engine Parts with serial number AA0 to FF9: \n\n");
    printf("MODEL   YEAR-OF-MANUFACTURE    MATERIAL    QUANTITY");
    for(i=0;i<10;i++)
    {
        printf("\nAA[%d]      %d                  %s          %d",i,AA[i].year_of_man,AA[i].material,AA[i].quantity);
    }
    for(i=0;i<10;i++)
    {
        printf("\nBB[%d]      %d                  %s          %d",i,BB[i].year_of_man,BB[i].material,BB[i].quantity);
    }
    for(i=0;i<10;i++)
    {
        printf("\nCC[%d]      %d                  %s          %d",i,CC[i].year_of_man,CC[i].material,CC[i].quantity);
    }
    for(i=0;i<10;i++)
    {
        printf("\nDD[%d]      %d                  %s          %d",i,DD[i].year_of_man,DD[i].material,DD[i].quantity);
    }
    for(i=0;i<10;i++)
    {
        printf("\nEE[%d]      %d                  %s          %d",i,EE[i].year_of_man,EE[i].material,EE[i].quantity);
    }
    for(i=0;i<10;i++)
    {
        printf("\nFF[%d]      %d                  %s          %d",i,FF[i].year_of_man,FF[i].material,FF[i].quantity);
    }
}


retriever()
{
    printf("\n\nRequired Details BB1 to CC6\n");
    printf("MODEL   YEAR-OF-MANUFACTURE    MATERIAL    QUANTITY");

    for(i=0;i<10;i++)
    {
        printf("\nBB[%d]      %d                    %s          %d",i,BB[i].year_of_man,BB[i].material,BB[i].quantity);
    }
    for(i=0;i<10;i++)
    {
        printf("\nCC[%d]      %d                    %s          %d\n",i,CC[i].year_of_man,CC[i].material,CC[i].quantity);
    }
}

int main()
{
    filler();
    printer();
    retriever();
    return 0;
}