//  Q.find max from a matrix and also show it's  position.
#include<stdio.h>
 int main(){
 int x[100][100] ,p,s ,i ,m, n , max ,b;
  scanf("%d%d" ,&n,&m ) ;

   for( i=0 ; i<n ; i++ ){

        for(b=0 ; b<m ; b++){
           scanf("%d",&x[i][b]);
}}
  max=x[0][0];
  for( i=0 ; i<n ; i++){
    for( b=0 ; b<m ; b++ ){
        if( x[i][b] >= max ){
            max=x[i][b];
            p=i;
            s=b;

        }
    }
  }
  printf("%d position box : {%d-%d}",max,p,s);
 }


