
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,sum=0,n;

    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        if(x%i==0)
        {
           sum=sum+i;
        }
    }printf("%d",sum);
}
