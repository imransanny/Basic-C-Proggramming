#include<stdio.h>
#include<string.h>

int main() {

     char x[100],s ;
     int i,c=0;
    gets(x) ;
    s=strlen(x) ;

      for(i=0 ; i<s ; i++){

         if(x[i]==' ' && x[i+1]==' '){
            x[i] = '0';
        //
         }
      }

     for(i=0 ; i<s ; i++){

        if(x[i]==' ' ){
            c++;

        }
     }printf("%s\n", x);
     printf("%d",c+1);


}
