#include<stdio.h>
int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n/=10;
        c++;
    }
    printf("%d",c);
}