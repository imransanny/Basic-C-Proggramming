/*
Q3 : write a   c program which can input some numbers and display how many of them has more than 3 even factors.

sample input : 40 17 25 10 60 50
sample output : 2 [note: 40 and 60 has more than 3 even factors]
*/
#include <stdio.h>
int main()
{
    int x[100],y[100], n, i,c,d,j ;
    scanf("%d",&n);

    for(i=0 ; i<n ; i++)
    {

        scanf("%d",&x[i]);
    }
    d=0 ;
    for(i=0 ; i<n ; i++)
    {
        c=0 ;
        for(j=2 ; j<x[i] ; j=j+1)
        {

            if(x[i]%j == 0)
            {
                y[i] = j ;
                //c++ ;
              if(y[i]%2==0){
                c++ ;
              }
            }

        }
        if(c>=3)
        {
            d++;
        }

    }
    printf("%d", d);
}
