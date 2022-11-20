#include<stdio.h>
int main()
{
    int x;
    printf("Enter a five digit no : ");
    scanf("%d",&x);
    int a=x;
    int z=0;
        z = z*10+x%10; x/=10;
        z = z*10+x%10; x/=10;
        z = z*10+x%10; x/=10;
        z = z*10+x%10; x/=10;
        z = z*10+x%10; x/=10;

    printf("Input number : %d || Reversed number : %d\n\n",a,z);
    if(a==z) printf("Palindrome\n\n\n");
    else printf("Not a Palindrome!\n\n\n\n\n\n\n");

    return 0;
}