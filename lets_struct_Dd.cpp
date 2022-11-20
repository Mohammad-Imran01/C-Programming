/* A record contains name of cricketer, his age, number of test
matches that he has played and the average runs that he has scored
in each test match. Create an array of structures to hold records of
20 such cricketers and then write a program to read these records
and arrange them in ascending order by average runs. Use the
qsort( ) standard library function */

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct
{
    char name[20];
    int age;
    int t_matches;
    int avg_run;
}data;
data *p = (data *)malloc(20*sizeof(data));
filler(struct cricketer *p)
{
    printf("\n\n\n");
    for(int i=0;i<2;i++)
    {
        printf("\nEnter details for  %dth player.\n",i+1);

        printf("Name of cricketer : ");
        scanf("%s",&(p+i).name);

        printf("Age of cricketer : ");
        scanf("%d",&(p+i).age);

        printf("Total matches played : ");
        scanf("%d",&(p+i).t_matches);

        printf("Average run          : ");
        scanf("%d",&(p+i).`avg_run);
    }
}
printer(struct cricketer *p)
{
    printf("\n\n\nDetails of all 20 cricketers.");
    for(int i=0;i<2;i++)
    {
        
        printf("\n\nName of the cricketer %d   : %s",i+1,p->name);
        printf("\nAge of the %dth cricketer  : %d",i+1,p->age);
        printf("\nTotal matches played       : %d",p->t_matches);
        printf("\nAverage run                : %d",p->avg_run);
    }

int main()
{
    struct cricketer rec[20];
    filler(rec);
  //  printer(rec);
  //  arranger(rec);
    return 0;
}
