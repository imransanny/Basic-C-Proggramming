#include<stdio.h>
  int main(){

    char x[100] ;
    int p,a,t,i;
    gets(x);
    p=strlen(x);

    for(i=0 ; i<p ; i++){

        for(i=0 ; i<p ; i++){

        for(t=0 ; t<p-1; t++){

                if((x[t]>='a' && x[t]<='z')||(x[t]>='A' && x[t]<='Z')){


            if(x[t]>= x[t+1]){
                a=x[t];
                x[t]=x[t+1];
                x[t+1]=a;
            }}
        }

    }}

   // for(t=0 ; t<p ;t++){
    printf("%s",x);

}
