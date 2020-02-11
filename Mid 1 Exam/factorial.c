#include<stdio.h>
int main()
{
    int x,i,f,s=0;
    for(i=2;i<=12;i=i+2)
    {

        f=s*i;
         s=s+i;
        s=s+2;
    }
    printf("%d",f);
}
