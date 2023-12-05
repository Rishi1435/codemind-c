#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("*
");
    for(i=1;i<n;i++){
        printf("*");
    for(int j=1;j<=i;j++)
    {    printf("*");
    }
    printf("
");
    }
}