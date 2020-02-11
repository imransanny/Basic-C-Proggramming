#include<stdio.h>
int main()
{
    int x,i;
    float sum=0;
    float avg;
    scanf("%d",&x);
    int num[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    avg=sum/x;
    printf("%f",avg);

}
