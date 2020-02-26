#include<stdio.h>
int main()
{
    int x,i,n,a,count,c,d=0,b=0;
     //input which number prime or not prime
   printf("input how many number  ");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    { printf("input the number  ");
        scanf("%d",&n);
      count=0;
    for(a=2;a<n;a++)
    {
        if(n%a==0)
        {
            count++;
        }

    }
    if(count==0)
    {
        d++;
    }
    else if(count!=0)
    {
        b++;
    }
    }
    printf(" prime  %d  not prime %d", d, b);
}
