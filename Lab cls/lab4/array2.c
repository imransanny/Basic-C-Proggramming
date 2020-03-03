#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    int num[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=x;i>0;i--)
    {
        printf("%d \n",num[i]);
    }
}
