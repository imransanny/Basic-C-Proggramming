// Q.input a string and display number of lower case vowel.
#include<stdio.h>
#include<string.h>
 int main(){
 char x[100];
 int  n , i , p ,c=0;
  gets(x) ;
   p=strlen(x);
  // for(i=0 ; i<p ; i++ ){
    //scanf()


   for (i=0 ; i<p ; i++){

       if( x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' ){
             c++;
       }
   }
   printf("%d",c);
}
