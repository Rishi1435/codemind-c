#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%2==0 && x>2 && x<5)
    {
        printf("not weird");
    }
    else if (x%2==0 && x>20)
    {
        printf("not weird");
    }
    else
    {
        printf("weird");
    }
}