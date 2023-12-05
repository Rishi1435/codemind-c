#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(n<m-1)
    {
        n++;
        printf("%d %d %d
",n,n*n,n*n*n);
    }
}