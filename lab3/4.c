#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n,a,i;
    a=0;
scanf("%d",&x);

    for(i=2;i<=n;i++)
    {

        if(x%i==0)
        {
         a=a+1;
         break;
        }}
        if(a==0)
        {printf("prime num");
        }
        else
        {
            printf("not prime");
        }

    }


