#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(i<=12)
    {
        printf("%d x %d = %d
",n,i,n*i);
        i++;
    }
}