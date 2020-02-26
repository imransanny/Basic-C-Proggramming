#include<stdio.h>
int main()
{
    int x[100],i,a,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
        for(i=0;i<n;i++)
        {
           int count=0;
            for(a=i+1;a<n;a++)
            {
                if(x[i]>x[a])
                {
                    count++;
                }
            }
            printf("%d",count);
        }
    }

