#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    while(y>=x)
    {
        if(x%2==0)
        {
            printf("%d ",x);
        }
        x++;
    }
}