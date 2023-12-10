#include<stdio.h>
int main()
{
    int n,f1=0,f2=1,f3;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
        
    }
}