#include<stdio.h>
int main(){

 int n,celsius,farenhite,kelvin,c,k,f;

 printf("1. celsius \n2. farenhite \n3. kelvin \n\n\nEnter the number :  ");

 scanf("%d",&n);
   switch(n) {
       case 1 :
           printf("write temperature in celsius: ");
           scanf("%d",&celsius );
            f=((celsius*9)/5)+32;
            k=celsius +273;
           printf(" farenhite : %d \nkelvin : %d \n ",f,k);
           break;

       case 2 :
           printf("write temperature in farenhite ");
           scanf("%d",&farenhite);
         c=(farenhite*5-32*5)/9;
            k=((farenhite-32)*5)/9+273;
           printf(" celsius %d \nkelvin %d\n",c,k);
           break;

       case 3:
           printf("write temperature in kelvin  ");
         scanf("%d",&kelvin);
         c=(kelvin-273)*5/5;
         f=(((kelvin-273)*9)/5)+32;
         printf("celsius %d \nfarenhite %d\n",c,f);
       }
}

