#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    e=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("%.4f",e);
}
