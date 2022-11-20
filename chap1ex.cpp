#include<stdio.h>

int rec(int n)
{
	if(n>0)
	{
		printf(" %d", (rec(n-1)+n)) ;
	}
	return 0;
}
int main()
{
	int a =5;
rec(a);
	return 0;
}