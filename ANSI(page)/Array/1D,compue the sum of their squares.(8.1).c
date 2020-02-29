#include<stdio.h>
int main()
{
    int i,n;
    int x[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int sum=0.0;
    for(i=0;i<n;i++)
    {
     sum=sum+(x[i]*x[i]);
    }
   /* for(i=0;i<n;i++)
    {
    printf("x[%d]    =   %.2f", i+1 , x[i]);

    }*/
     printf("\n sum= %d",sum);
}
