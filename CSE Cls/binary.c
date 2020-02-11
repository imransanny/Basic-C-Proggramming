#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);
    for( ; n!=0 ; )
    {
        x=n%2;
        n=n/2;
printf("%d",x);
    }
}
