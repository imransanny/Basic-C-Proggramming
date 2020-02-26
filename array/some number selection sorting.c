#include<stdio.h>
int main()
{   int array[100];
    int a,n,i,min,p,t;
     printf("enter the number of element");
     scanf("%d",&n);
     printf("input number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<n-1;i++)
    {
       min=array[i];
        for(a=i+1;a<n;a++)
        {
            if(array[a]<min)
               {
                   min=array[a];
                   p=a;

                   }
        }
        t=array[i];
        array[i]=array[p];
        array[p]=t;

    }
    printf("sorting number");
    for(i=0;i<n;i++)
    {

    printf(" %d",array[i]);
    }
}
