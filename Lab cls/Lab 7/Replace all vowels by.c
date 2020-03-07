#include<stdio.h>
#include<string.h>
int main()
{

    char x[100];
    int i,p;
    gets(x);
    p=strlen(x);

    for(i=0 ; i<p ; i++)
    {

        if((x[i]=='a') || ( x[i]=='e') || (x[i]=='i') || (x[i]=='o') || (x[i]=='u'))
        {
            x[i]='?';
        }
        else
        {

            x[i]=x[i];
        }
    }

    for(i=0 ; i<p ; i++)
    {
        printf("%c",x[i]);
    }

}
