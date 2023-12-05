#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    scanf("%d",&n);
    do
    {
        sum=sum+i;
        i++;
    }
    while(n>=i);
    printf("%d",sum);
}