// temperature double word count output: t=2,e=3,m=1
#include<stdio.h>
#include<string.h>

int main(){

 char x[100] ;
 int i,p,a ,c;
 gets(x);
 p=strlen(x);

 for(a=0 ; a<p ; a=a+2){
  c=0 ;
 for(i=0 ; i<p-1 ; i=i+1){
        if((x[i]>='a' && x[i]<='z')||(x[i]>='A' && x[i]<='Z')){


      if(x[i]==x[i+1]){
        c++ ;

    }
  }
 }printf( "%d" ,c);
}

}
