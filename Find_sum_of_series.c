#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    float res=0;
    while(i<=n)
    {
        res=res+(1.0/i);
        
        i++;
        
    }
    
    printf("%.2f",res);
}