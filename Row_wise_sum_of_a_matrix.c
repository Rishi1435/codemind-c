#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=0;j<m;j++)
        {
            sum+=mat[i][j];
        }
        printf("%d ",sum);
    }
}