#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,ans=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           ans=i;

        }

    }  printf("  %d",ans);
}
