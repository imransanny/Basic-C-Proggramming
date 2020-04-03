/*
 Q4: write a c program can input a word and display in UpLow format .UpLow format means first half of letter of the word
must be in uppercase and remaining letters must be an lowercase formate.
sample input : aboUt
sample output:ABout
*/
 #include<stdio.h>
 #include<string.h>
 #include<math.h>
  int main()
 {
    char x[100];
    int i,p ,s;
    gets(x);
    s=strlen(x);
    if(s%2==0){
      p=s/2;
    }
    else if(s%2!=0){
        p=ceil(s/2.0);
    }
    for(i=0 ; i<p ; i++ )
    {
        if( i<p )
        {
            if(x[i]>='a' && x[i]<='z' )
            {
                x[i]=x[i]-32 ;
            }
            else{
                x[i]=x[i];
            }
      }
        else
        {
            if(x[i]>='A' && x[i]<='Z' )
            {
                x[i]=x[i]+32 ;
            }
            else{
                 x[i]=x[i];
            }
            }
 }
   for(i=0 ; i<s ; i++){
    printf("%c",x[i]) ;
   }
 }

