// Q.input some number and display diff between max of 1st half and 2nd half.
#include<stdio.h>
#include<math.h>
int main()
{
    int x[100], n, i ,p , max1 , max2 ,diff ;
    scanf("%d", &n);

    for(i=0 ; i<n ; i++ )
    {
        scanf("%d", &x[i] );
    }
    if( n%2 == 0 )
    {
        p=n/2;
    }
    else if ( n%2 != 0)
    {
       p=ceil(n/2.0);
    }
    max1 = x[0] ;
    max2 = x[p] ;

    for( i=0 ; i<n ; i++ )
    {

        if(i < p)
        {

            if( x[i] > max1 )
            {

                max1 = x[i] ;
            }
        }
        else
        {
            if ( x[i] > max2 )

                max2 = x[i] ;
        }
    }
        diff = max1-max2 ;
        printf("%d",diff);
}
