#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    for(a=2;a<=n;a=a+1)
        if(n%a==0)
    {
        b=b+1;
    }
    if(b==0)
    {
        printf("prime num");

    }else
    {
        printf("not prime num");
    }
}
