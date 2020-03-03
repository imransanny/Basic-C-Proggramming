
#include<stdio.h>
int main()
{
    int array[1000],i,n,max,min,range;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=1;i<n;i++)
    {
        if(max<array[i]){
            max=array[i];
        }
    else
    {
        min=array[i];
    }
    }
    printf("%d\n %d\n ",max,min);
}
