#include<stdio.h>
int main()
{
    int x[100], n, i,a,q,p ;
    scanf("%d",&n);

    for( i=0 ; i<n ; i++ )
    {
        scanf("%d",&x[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        for(a=0 ; a<n-i ; a++ )
        {
            if( x[a] < x[a+1])
            {
                p=x[a] ;
                x[a]=x[a+1] ;
                x[a+1]=p ;
            }
        }
    }
    /*for(i=0 ; i<n ; i++)
    {
        printf("%d ",x[i]);
    }*/
    q=ceil(n*0.1)-1;
    printf("%d",x[q]);
}



