#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,n;

    scanf("%d",&x);
    for(i=1;i<=1000000000000000000;i++)
    {
        printf("%d * %d = %d \n",x,i,x*i);
    }
}

