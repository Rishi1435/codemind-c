#include<stdio.h>
int main()
{
    int a;
    int i,j;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=a;j>=i;j--)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}