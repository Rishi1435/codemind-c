#include<stdio.h>
int main()
{
    int n,r,l,sum=0;
    scanf("%d",&n);
    l=n*n;
    while(l>0)
    {
        
        r=l%10;
        l/=10;
        sum+=r;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}