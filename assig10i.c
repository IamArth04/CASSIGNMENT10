#include<stdio.h>
int num(int n);
int main()
{
    int n,rem,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        if(rem==digit)
             return 1;
        n=n/10;
    }
    return 0;
}
