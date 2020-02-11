#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        max=2*a;
    }
    else
    {
        max=b*2;
    }
    printf("%d",max);
}
