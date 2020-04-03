#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x;
    scanf("%d%d%d",&a,&b,&c);
    x=(-b+-sqrt(b*b-4*a*c))/2*a;
    if(b*b-4*a*c==0)
    {
     printf("x is infinite");
    }
    else if(b*b-4*a*c<0)
    {
        printf("x has imaginary values");

    }
    else if(b*b-4*a*c>0)
    {
        printf("x has real values and those are=%f",x);
    }
}
