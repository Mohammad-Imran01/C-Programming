#include<stdio.h>
int compute(int n)
{
    if(n==9)
        return 11;
        int res = 0,temp,base = 1;
        for (temp = n/10;temp>0;temp=temp/10)
        {
            res = res*10+temp%10;
            base *=10;
        }
        return n*base + res;
        
}
int prime(int n)
    {
        int i;
        int flag;
        for ( i=2 ; i*i<=n;i++)
        {
            flag=0;
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\n",n);
        }
        
    }

    main()
   {
       int x,y,temp = 0;
       printf("Input two numbers (separated by a space)\n");
       scanf("%d%d",&x,&y);

       printf("List of prime Palindromes: \n");
       for(;temp<=y;x++)
       {
           temp = compute(x);
           prime(temp);
       }
   }
    