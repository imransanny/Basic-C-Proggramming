#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0&&n%(i+1)==0)
        {
            printf("%d %d ",i,i+1);
        }
    }
}
