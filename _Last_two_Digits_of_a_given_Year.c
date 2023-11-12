#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%100<10)
    {
        printf("0%d",x%100);
    }
    else
    {
        printf("%d",x%100);
    }
}