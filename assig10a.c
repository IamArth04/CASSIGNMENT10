#include<stdio.h>
float mult(float);
int main()
{
    float a,area;
    printf("Enter a Number: ");
    scanf("%f",&a);
    area=3.14*a*a;
    printf("Area of circle is %f",area);
    return 0;
}
float mult(float a)
{
    int b;
    b=3.14*a*a;
    return b;
}