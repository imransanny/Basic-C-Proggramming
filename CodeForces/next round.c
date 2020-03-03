#include<stdio.h>
int main()
{
    int a,b,i,c=0,d;
    scanf(" %d %d", &a, &b);
    int x[100];

    for(i=0 ; i<a ; i++)
    {
        scanf("%d  ",&x[i]);
    }
    x[i]=b;
    for(d=0; d<a; d++){
      if( x[d] >= x[b] ){
            c++;
        }
       // if(x[i])
    }
    printf(" %d " , c);
}
