#include<stdio.h>
int main(){

    char x;
   scanf("%c",&x);

   if(x>='A' && x<='Z'){
     printf("Upper case");
   }

   else if(x>='a' && x<='z'){
   printf("lower case");
    }
}
