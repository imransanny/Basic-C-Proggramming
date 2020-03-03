#include<stdio.h>
int main()
{
    int array[1000],i,n,range;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
   int max=array[0];
   int min=array[0];
    for(i=1;i<n;i++)
    {
        if(max<array[i]){
           max= array[i];
        }
    else if(min>array)
    {
        min=array[i];
    }
    }
    if(max>min)
    {
        range=max-min;
    }
    else
    {
        range=min-max;
    }
    printf("%d\n %d\n %d\n",max,min,range);

}
