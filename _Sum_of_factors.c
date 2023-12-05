#include<stdio.h>
int main()
{
    int n,i=1,res=0;
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {  
            res = res+i;
        }
        i++;
    } printf("%d ",res);
}