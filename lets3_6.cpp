#include<stdio.h>
int main()
{
    int ra , sh , aj;
    printf("\nEnter three ages : \n");
    scanf("%d%d%d",&ra,&sh,&aj);

    if(ra < sh && ra < aj) printf("Ra is youngest \n");
    if(aj > sh && sh < ra) printf("Sh is youngest \n");
    if(aj < sh && aj < ra) printf("aj is youngest \n");

    return 0;
}