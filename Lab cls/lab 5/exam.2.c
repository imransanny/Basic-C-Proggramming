#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==90||b==90||c==90)
    {
        if(a*a==(b*b+c*c)||b*b==(a*a+c*c)||c*c==(a*a+b*b))
        {
            printf("it is a right angle");
        }

    }
    else
    {
        printf("it is not right angle");
    }
}
