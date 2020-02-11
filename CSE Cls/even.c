
#include<stdio.h>
#include<conio.h>
int main()
{
   int n;
scanf("%d",&n);
while(n!=0)
{
    if(n%2==0)
    {
        n=n/2;

    }
    else
    {
        n=3*n+1;
    }
}printf("%d",n);
}



