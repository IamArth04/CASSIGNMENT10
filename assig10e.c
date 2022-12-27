#include<stdio.h>
#include<stdlib.h>
void NAT(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    NAT(n);
    printf("\n");
    return 0;
}
void NAT(int n)
{
    int c,i;
    for(i=1;i<=n;i++)
    {
        printf("%d",2*i-1);
        printf("\n");
    }
}