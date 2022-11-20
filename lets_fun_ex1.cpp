#include<stdio.h>
void message();
int main()
{
 message(message());
 return 0;  
}

void message()
{
    printf("Viruses are written C!!\n");
}
