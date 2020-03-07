//print sentence upper and lower such as ThE EnD output:tHe eNd
#include <stdio.h>
int main()
{
    char x[100];
    int p,i;
   // scanf(" s",x);
    gets(x);
    p=strlen(x);

    for(i=0 ; i<p ; i++){

        if(x[i]>='A' && x[i]<='Z'){
            x[i] = x[i]+32 ;
        }
        else if (x[i]>='a' && x[i]<='z'){
            x[i] = x[i]-32 ;
        }
        }
        for(i=0 ; i<p ; i++){
            printf("%c",x[i]);
        }

}
