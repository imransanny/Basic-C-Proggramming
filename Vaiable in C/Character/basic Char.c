/*#include<stdio.h>
 int main(){
  int i,x,n;
 // scanf("%d",&n);
  //for(i=0;i<n;i++){
        scanf("%d",&x);
  if(x>='A' && x<='Z'){
    printf("%c" ,x);
  }
  }//
  */
                     //String basic

  /* gets() is a   scanf function
  it is a function = strlen()       { which is work for input  count such as x=apple;  strlen(x)=5 }
  string= %s ;
  scanf("%s",x);   { & operator not used scanf function  }
                       {and printf function not used array suppose x[i] only used x}



 gets() is scanf function which is the last position put NULL /'\0'0 */


  #include<stdio.h>
  int main(){

  int x[100],p,i,c=0;
   gets(x);
   p=strlen(x);

 for(i=0 ; i<p-1 ; i++){

        if(x[i]==x[i+1]){
          c++;
  }

  }printf("%d ",c);

  }



