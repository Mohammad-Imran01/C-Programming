#include<stdio.h>
void Pfact(int num,int count)
{
   if(num<1)return ;
   else if(num%count == 0) 
   {
    printf("%d\n", count);  
    Pfact(num / count, count); 
   }
       else  
    {  
      Pfact(num, count+1);  
    }  
}
int main()
{
    int x;
    printf("Enter a num : ");
    scanf("%d",&x);
    Pfact(x,2);
    return 0;
}