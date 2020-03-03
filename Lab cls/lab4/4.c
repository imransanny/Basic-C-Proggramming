#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,x,y,sum;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    x=n%10;
    y=n/10;
    sum=x+y;
    }
    printf("%d",sum);

}
