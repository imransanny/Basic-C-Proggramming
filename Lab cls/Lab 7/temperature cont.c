// temperature
#include<stdio.h>
#include<string.h>
int main()
{
    char x[10];
    int n, i, p, j, c;
    gets(x);
    p=strlen(x);

    for(i=0 ; i<p ; i++)
    {
        c=1;
        for(j=i+1 ; j<p ; j++)
        {

            if(x[i] == x[j])
            {

                c++;
                x[j]='\0';
            }
        }
        if(x[i]=='\0'){

            continue ;
        }
        else{
        printf("%c=%d\n", x[i], c);
        }

    }
}
