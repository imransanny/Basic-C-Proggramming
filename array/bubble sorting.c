#include<stdio.h>
int main()
{
    int x[100],n,i,a,p,t;

    printf(" enter how many degit : ");

    scanf(" %d ",&n);
    printf(" enter the number : ");
    for(i=0; i<n; i++)
    {
        scanf(" %d ", &x[i]);
    }
    for(i=0; i<n; i++)
    {
        for(a=0; a<n-i; a++)
        {
            if(x[a]>x[a+1])
            {
                t=x[a];
                x[a]=x[a+1];
                x[a+1]=t;
            }
        }
    }
    for(i=0; i<n; i++)
    {

        printf(" %d ", x[i]);
    }

}
