#include<stdio.h>
int main(){
 char x[100] ;
 int c=0,n,i;
 gets(x);
 n=strlen(x);

    for(i=0;i<n;i++){

  if((x[i]=='a' || x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')&&(x[i]=='A' || x[i]=='E' || x[i]=='I'||x[i]=='O'|| x[i]=='U'))
  {
    c++;
 }
 }
 printf("%d",c);
}
