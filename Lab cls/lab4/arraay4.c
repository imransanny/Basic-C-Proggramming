#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int num_x[n],num_y[n];
    for(i=0;i<n;i++)                           //WRONG
    {
        scanf("%d",&num_x[n]);
        num_x[n]=num_y[n];
    }
    for(i=0;i<n;i++)
    {
     printf("%d \n %d",num_x[n],num_y[n]);

    }
}
