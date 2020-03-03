#include<stdio.h>

int main()
{int n,i,sum=1;
scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("%ld",sum);
}
