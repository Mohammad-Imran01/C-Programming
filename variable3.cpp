#include<stdio.h>
#include<stdlib.h>

int main()
{
    char buffer[] = "2016 40a0b0";

    char *ptr_end;
    long int i1 , i2 , i3 , i4 ;

    i1 = strtoul (buffer , &ptr_end , 10);
      i2 = strtoul (buffer , &ptr_end , 16);
        i3 = strtoul (buffer , &ptr_end , 12);
          i4 = strtoul (ptr_end ,NULL, 0);

          printf("\n In decimal : %ld , %ld , %ld , %ld \n\n",i1, i2 , i3 , i4);
          return 0;v

}