#include<stdio.h>
int main()
{
    int x,h,m,s,c;
    scanf("%d",&x);
    h=x/3600;
    x=x%3600;
    m=x/60;
    s=x%60;
    if(h>12)
    {
        h=h-12;
        c++;
    }
    if(c==0)
    {
        printf("%02d : %02d : %02d AM",h,m,s);
    }
    else
    {
        printf("%02d : %02d :%02d PM",h,m,s);
    }
}

