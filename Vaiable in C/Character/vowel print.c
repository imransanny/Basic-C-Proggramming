#include<stdio.h>
int main(){
 char x ;
 int c=0,n,i;
 scanf("%d",&n);

    for(i=0;i<n;i++){
         scanf(" %c",&x);

  if(x=='a' || x=='e'||x=='i'||x=='o'||x=='u'){
    c++;
 }
 }
 printf("%d",c);
}
