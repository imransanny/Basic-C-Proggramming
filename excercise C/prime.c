#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,a;
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
           a++;

        }
        if(a==0)
        {
            printf("prime prime number %d",a);
        }
        else
        {
            printf(" not prime number %d",a);
            break;

        }
    }
}
