#include<stdio.h>
int OE(int);
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even",a);
    }
    return 1;
}
int OE(int s)
{
    int b;
    printf("Enter a Number: ");
    scanf("%d",&b);
    if(b%2!=0)
    {
        printf("%d is odd",b);
    }
    return 0;
}