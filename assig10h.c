#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
           fact=fact*i;
    return fact;
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int perm(int n,int r)
{
    return fact(n)/(fact(n-r));
}
int main()
{
    printf("%d",comb(5,2));
    return 0;
}
