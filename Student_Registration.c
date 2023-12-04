#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,m,k,l;
        scanf("%d%d%d",&n,&m,&k);
        l=m-k;
        if(n<l)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}