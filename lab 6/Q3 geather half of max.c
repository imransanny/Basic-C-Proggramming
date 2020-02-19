#include<stdio.h>
int main()
{
    int array[1000],i,n,hmax,hmin;
    float half;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(i=1;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }}
   half=max/2.0;
   for(i=0;i<n;i++)
   {
       if(half<array[i])
       {
           hmax=array[i];
       }
       else
       {
           hmin=array[i];
       }
   }
   printf("%d\n %d\n",hmax,hmin);




}
