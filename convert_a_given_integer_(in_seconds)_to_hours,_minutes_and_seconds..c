#include<stdio.h>
int main()
{
    int x,h,m,s;
    scanf("%d",&x);
    h=x/3600;
    m=(x%3600)/60;
    s=x%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}