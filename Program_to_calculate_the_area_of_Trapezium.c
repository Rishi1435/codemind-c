#include<stdio.h>
int main()
{
    float b1,b2,h,a;
    scanf("%f%f%f",&b1,&b2,&h);
    a=0.5*(h*(b1+b2));
    printf("%.4f",a);
}