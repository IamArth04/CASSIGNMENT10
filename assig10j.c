#include<stdio.h>
void prime(int );
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    prime(n);
    printf("\n");
    return 0;
}
void prime(int n)
{
    int c,i;
    for(i=2;n!=0;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
                printf("%d",i);
                printf("\n");
            }
        }
    }
}