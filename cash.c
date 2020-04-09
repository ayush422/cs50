#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float c;
    int change,q,d,n,p,coin;
    do
    {
        c=get_float("Enter the amount of change owed: ");
    }while(c<0);
    
    change=round(c*100);
    q=change/25;
    d=(change%25)/10;
    n=(change%25%10)/5;
    p=change%25%10%5;
    coin=q+d+n+p;
    printf("%d\n",coin);
    
    return 0;
}

