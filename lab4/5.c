#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,i,n,sum;
    scanf("%d%d",&x,&y);
    for(i=2;i<n;i++)
    { if(x%i==0&&y%i==0)
        sum=i;

    }
    printf("%d",sum);
}
