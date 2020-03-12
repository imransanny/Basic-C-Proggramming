 #include<stdio.h>
 int main(){
  int x[100] , i , n , c ,j;
  scanf("%d",&n);

  for(i=0 ; i<n ; i++){

    scanf("%d",&x[i]);
    }
    for(i=0 ; i<n ; i++){
       c=0 ;
       for(j=1 ; j<x[i] ; j++){

        if ( x[i] % j== 0 ){
            c++;
        }
       }
       printf(" number : %d \n most factor : %d \n",x[i],c);
    }

 }
