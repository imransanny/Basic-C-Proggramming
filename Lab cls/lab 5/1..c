#include<stdio.h>
#include<conio.h>
int main()
{
    int x,h,m,s;
    scanf("%d",&x);
    h=x/3600;
    x=x%3600;
    m=x/60;
    s=x%60;
    printf("%02d %02d %02d",h,m,s);
}
