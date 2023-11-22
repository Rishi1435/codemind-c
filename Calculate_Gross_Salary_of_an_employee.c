#include<stdio.h>
int main()
{
    float s,h,d,pf,gs;
    scanf("%f%f%f",&s,&h,&d);
    pf=0.12*s;
    gs=s+pf+h+d;
    printf("%.2f",pf);
    printf("
%.2f",gs);
}