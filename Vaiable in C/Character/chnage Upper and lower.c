#include<stdio.h>
 int main(){
 char x;
 printf("enter the character : ");
 scanf("%c",&x);

    if(x>='a' && x<='z'){
        x=x-32;

    printf("Upper case value : %c",x);
}
   else if(x>='A' && x<='Z'){
       x=x+32;
       printf("lower case value : %c",x);
   }
   }
