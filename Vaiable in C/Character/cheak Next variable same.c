//next variable same hole yes otherwise not.
#include<stdio.h>
int main(){
  int n,i,c=0;
  char x[100];
  scanf("%d",&n);

  for(i=0 ; i<n ; i++ ){
    scanf(" %c",&x[i]);
  }
  for(i=0 ; i<n-1 ; i++){

    if(x[i]==x[i+1]){
        c++;
  }
if(c!=0){
    printf("yes");
}
else{
    printf("no");
}
}



/* c++;
  break;
  if("c==0"){
    printf("no");
  }
  else{
    printf("yes");
  }  */



 /* c++;
  if(c>=1){
    printf("yes");
    }
     else {
        printf("no")
     } */


     /*if( x[i] == x[i+1] ){
              printf("yes");
              break;
     }
     if(x[i]==n-1)
     {
         printf("no");
     } */
