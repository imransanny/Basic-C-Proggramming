#include<stdio.h>
int main()
{
    int ary[200],n,a,i,b,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    max=ary[0];
    for(a=1;a<n;a++)
    {
        if(ary[a]>max)
        {
            max=ary[a];
        }
        }
    int c=0;
    for(b=0;b<n;b++)
    {
        if(ary[b]==max)
        {
            c++;
        }
    }
    printf("%d",c);
}
