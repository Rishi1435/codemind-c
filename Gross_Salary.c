#include<stdio.h>
int main()
{
    int bs;
    float da,hr;
    scanf("%d",&bs);
    if(bs<=10000)
    {
    da=bs*0.8;
    hr=bs*0.2;
    printf("%.2f",bs+da+hr);
    }
    else if(bs<=20000)
    {
        da=bs*0.9;
        hr=bs*0.25;
        printf("%.2f",bs+da+hr);
    }
    else if(bs>20000)
    {
        da=bs*0.95;
        hr=bs*0.3;
        printf("%.2f",bs+da+hr);
    }
    
}