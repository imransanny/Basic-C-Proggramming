#include<stdio.h>
 int main(){
  char x;
  int i,n,c=0;
  scanf("%d",&n);
  for(i=0 ; i<n ; i++){
    scanf(" %c",&x);
    if(x>='a' && x<='z'){
        c++;
    }
  }
  printf("%d",c);

}
