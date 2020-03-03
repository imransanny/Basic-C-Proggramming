#include<stdio.h>
int main()
{
    int x,i,c=0;
    scanf("%d",&x);
    int numA[x],numB[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&numA[i]);

    }
    for(i=0;i<x;i++)
    {
        numB[i]=numA[i];
        printf("%d ",numB[i]);
    }
}
