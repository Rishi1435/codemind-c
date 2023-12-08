#include<stdio.h>
int main()
{
    int n,r,res=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        temp/=10;
        res=res*10+r;
    }
    if(n==res)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}