/* Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the college.
(1) Write a function to print names of all students who joined in a
particular year.
(2) Write a function to print the data of a student whose roll
number is received by the function 
*/

#include<stdio.h>
#include<string.h>
struct s_data 
{
    int Roll_num;
    char Name[50];
    char Department[100];
    char course[50];
    int year_of_join;

}s[450];
void set_student_data() //Enter student Data
{
    for(int i=0;i<450;i++)
    {      
        printf("\n%d Student",i+1);  
        fflush(stdin);
        printf("\nEnter name of the student : ");
        scanf("%s",&s[i].Name);

        fflush(stdin);
        printf("\nEnter Roll number of the student : ");
        scanf("%d",&s[i].Roll_num);

        fflush(stdin);
        printf("\nEnter Department of the student :");
        scanf("%s",&s[i].Department);

        fflush(stdin);
        printf("\nEnter The Course taken : ");
        scanf("%s",&s[i].course);

        fflush(stdin);
        printf("\nEnter Year of the Joining  : ");
        scanf("%d",&s[i].year_of_join);
    }
}
void display()
{
    for(int i=0;i<450;i++)
    {
        printf("\n%d. Student Name : %s",i+1,s[i].Name);
        printf("\n%d. Student Roll : %d",i+1,s[i].Roll_num);   
        printf("\n%d. Students Department : %s",i+1,s[i].Department);
        printf("\n%d. Student Course : %s",i+1,s[i].course);
        printf("\n%d. Student Year of joining : %d",i+1,s[i].year_of_join);

    }
}
void name_by_year(int y)
{
    int i,j=0;
    for(i=0;i<450;i++)
    {
        if(y == s[i].year_of_join)
        {
            printf("\n%s Joined on %d year\n",s[i].Name,s[i].year_of_join);
            j=1;
        }
        if(j == 0 ) printf("\n No one has Joined : \n");
    }
}

//function to get student data based on oll number 
void data_acc_roll(int r)
{
      int i,j=0;
    for(i=0;i<450;i++)
    {
        if(s[i].Roll_num == r)
        {
        printf("\n%d. Student Name : %s",i+1,s[i].Name);
        printf("\n%d. Student Roll : %d",i+1,s[i].Roll_num);   
        printf("\n%d. Students Department : %s",i+1,s[i].Department);
        printf("\n%d. Student Course : %s",i+1,s[i].course);
        printf("\n%d. Student Year of joining : %d",i+1,s[i].year_of_join);
            j=1;
        }
        if(j == 0 ) printf("\n No Such Roll Number present : \n");
    }
}
int main()
{
 int i,r,y;
 printf("\nEnter the Data for each Student :\n");

 //Initialize or fill data
 set_student_data();

 //Now display them
 display();

 //search data for year of join
 printf("\nEnter the Year of the joining the Students :");
 scanf("%d",&y);

 name_by_year(y); //year of join passed to function

 //Search data based on Roll Number
 printf("\nEnter roll number of the student : ");
 scanf("%d",&r);

 data_acc_roll(r); // roll  number passed to function

 return 0;

}