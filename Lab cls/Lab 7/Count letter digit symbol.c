 #include<stdio.h>
 #include<string.h>
 int main(){

  char x[100];
  int i,p,c=0,d=0,e=0;
  gets(x);
  p=strlen(x);

  for(i=0 ; i<p ; i++){

        if((x[i]>='A' && x[i]<= 'Z')||(x[i]>='a' && x[i]<='z')){
             c++;
    }
    else if(x[i]>='0' && x[i]<='9'){
        d++;
    }
    else{
        e++;
    }
  }
  printf("letter %d, digit %d, symbol %d," ,c,d,e);
}
