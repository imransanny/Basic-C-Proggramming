 //count how many vowel exmple apple output 2.

  //processes 1:
  /* #include <stdio.h>

 int main(){

  char x[100];
  int p,i,c ;
  gets(x) ;
  p=strlen(x) ;
   c=0;
  for(i=0 ; i<p ; i++){

  if((x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' ) ||  (x[i]=='A' || x[i]=='E' || x[i]=='I'||x[i]=='O'|| x[i]=='U'))
  {
     c++ ;
  }
  }
printf("%d" ,c) ;
} */

 //process :2


   #include <stdio.h>

    int main(){

  char x[100];
  int p,i,c ;
  gets(x) ;                       //gets function ta last ar box a NULL bojai tai strlen na diyeo kaj kora jai
   c=0;
  for(i=0 ; x[i]!='\0' ; i++){

  if((x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' ) ||  (x[i]=='A' || x[i]=='E' || x[i]=='I'||x[i]=='O'|| x[i]=='U'))
  {
         c++;
  }
  }
  printf("%d" ,c);
    }


   // process 3 :

