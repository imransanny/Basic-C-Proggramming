#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       if(i%3==0&&i%5==0)
       {
           printf("%d ",i);
       }
    }
}
