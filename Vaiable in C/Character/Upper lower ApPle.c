
#include<stdio.h>
int main(){
char x[100],y[100];
int i;
gets(x);

for(i=0 ; i !='\0' ; i++){

if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' )  {

    x[i]=x[i]-32;
}
  // else if (x[i]=='A' || x[i]=='E' || x[i]=='I'||x[i]=='O'|| x[i]=='U'){

               //x[i]=x[i]+32;

    else{
        y[i]=x[i];
    }
        y[i]='\0';
}
printf("%s",y);
}

