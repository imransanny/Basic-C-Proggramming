#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",n);
    for(i=1;i<=n;i++)
    {
     if(n%3==0&&n%5==0)
     {  sum=sum+1;
         printf("%d",sum);
     }
    }
}
