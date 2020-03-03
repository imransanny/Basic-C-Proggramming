/*   basic char:   The ASCII value difference between uppercase and lower case letters in alphabet is 32.
    Uppercase A has ASCII value 65 in decimal .So for Z ,the value is 90 in decimal.

    Lowercase a has ASCII value 97 in decimal .So for z ,the value is 122 in decimal.

    'A' diye variable bojai na constant man bojai
    */

//Character range 256
/*#include<stdio.h>
  int main(){
   char x ;
     scanf("%c" ,&x );
      printf("%c",x);
}*/

//input A output E in c program
/*#include<stdio.h>
  int main(){
   char x ;
     scanf("%c" ,&x );
      printf("%c",x+4);
}*/

//ASCI number show input A output A=65 ,a=97 |
 /*  #include<stdio.h>
    int main(){
    char x ;
     scanf("%c" ,&x );
      printf("%d",x);
}  */
// bangladesh print
 #include<stdio.h>
 int main(){
  int i,n;
  char x;
  scanf("%d",&n);
  for(i=0;i<n;i++){
        scanf(" %c",&x);
  //if(x>='A' && x<='Z'){
    printf("%c" ,x);
}


  /*#include<stdio.h>
    int main(){
   char x;
   int i,n;
   scanf("%c",&n);
    for(i=0 ; i<n ; i++ ){
    scanf("%c",&x);
   }
   for(i=0;i<n;i++){
   printf("%c",x);
    }
    }*/
