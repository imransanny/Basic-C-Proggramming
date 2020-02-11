#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n,i,s,c;
    s=0,c=1;
    for(i=1;i<=n;i++)
    {  s=s+c;
        s=s*c;
        c=c+1;
    }
    printf("%d",c);
}
