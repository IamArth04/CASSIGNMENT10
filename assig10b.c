#include<stdio.h>
float SI(float,float,float);
int main()
{
    float PAmount,ROI,Time_Period,si;
    printf("Enter the Principal Amount,Rate of Time and Time Period: ");
    scanf("%f %f %f",&PAmount,&ROI,&Time_Period);
    si=(PAmount*ROI*Time_Period)/100;
    printf("Simple Interest for Principal Amount %.2f is = %.2f",PAmount,si);
    return 0;
}
float SI(float PAmount,float ROI,float Time_Period)
{
    int b;
    b=(PAmount*ROI*Time_Period)/100;
    return b;
}
