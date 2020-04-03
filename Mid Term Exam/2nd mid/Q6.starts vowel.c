/*
Q6. write a c program which takes some words as input and display how many words stars with vowel.
sample input:Apple
             Table
             Doctor
             ornge
             Umbrella
sample Output : 3
*/
 #include<stdio.h>
 #include<string.h>
 int main(){
 char x[100];
 int p, m,n, c , i , j;

 /*//scanf("%d",&m);
// for(i=0 ; i<=n ; i++){
 //for(j=0 ; j<=m ; j++){
       // scanf("%s",&x[i][j]);
 }*/
gets(x);
p=strlen(x);
    for(i=0 ; i<=p ; i++){
// for(j=0 ; j<=m ; j++){
   c=0;
       if(x[0]=='A' || x[0]=='E' || x[0]=='I' || x[0]=='O' || x[0]=='U'){
            c++;
       }
    }

 printf("%d",c);
 }



