#include<stdio.h>
int main()
{
    int n,l,r=0;
    scanf("%d",&n);
    while(n>0)
    {
        l=n%10;
        n/=10;
     if(l>r)
     {
         r=l;
     }
    } printf("%d",r);
}