#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    x=n%10;
    n=n/10;
    if(x=0)
    {break;

    }


    }printf("%d",i);
}
