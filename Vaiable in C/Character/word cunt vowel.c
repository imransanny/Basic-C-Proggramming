#include <stdio.h>
#include<string.h>

int main()
{

    char x[100];
    int c=0,i;
    gets(x);

    for(i=0 ; i !='\0' ; i++)
    {

        if((x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' )||(x[i]=='A' || x[i]=='E' || x[i]=='I'||x[i]=='O'|| x[i]=='U'))
        {
            c++;

        }

    }
    printf("%d",c);
}
