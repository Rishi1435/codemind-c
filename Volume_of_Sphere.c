#include<stdio.h>
int main()
{
    float r,R,vol;
    scanf("%f",&r);
    R=r*r*r;
    vol=(4*3.14*R)/3;
    printf("%.2f",vol);
    }