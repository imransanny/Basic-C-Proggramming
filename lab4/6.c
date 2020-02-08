#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,mul=0;
    scanf("%d%d",&a,&b);
    for( i=1;i<=a; i++ )
    {
        mul=mul+b;
    }
    printf("%d",mul);
}
