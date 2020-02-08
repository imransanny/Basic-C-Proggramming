#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,ans=0;
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
    { ans=ans+i;
    }


     } printf("%d",ans);
    if(ans==x)
    {
        printf("prerfect number ");
    }
    else
        {printf("not perfect");
        }
}
