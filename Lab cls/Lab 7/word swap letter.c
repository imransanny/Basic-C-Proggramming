//input apple output palpe
#include<stdio.h>
#include<string.h>
int main()
{

    char x[100];
    int p,i,a;
    gets(x);
    p=strlen(x);

    for(i=0 ; i<p-1 ; i=i+2)
    {
        a=x[i];
        x[i]=x[i+1];
        x[i+1]=a;
    }
    for(i=0 ; i<p ; i++)
    {

        printf("%c" ,x[i]);
    }

}
