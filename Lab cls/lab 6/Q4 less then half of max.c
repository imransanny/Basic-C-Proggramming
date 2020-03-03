#include<stdio.h>
int main()
{
    int array[100],i,n,c=0;
    float half;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(i=0;i<n;i++)
    {
    if(max<array[i])
    {
        max=array[i];
    }
    }
    half=max/2.0;

    for(i=0;i<n;i++)
    {
        if(half>array[i])
        {
            c++;
        }

        }

    printf("less then half of max %d",c);
}
