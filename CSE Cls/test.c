#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    int s=0,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+c;
        c=c+2;
        if(n==i)
        {break;
        }
    }printf("%d",s);
}
