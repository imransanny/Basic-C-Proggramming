#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    {
        printf(" triangle is a equilateral");

    }
    else if(a==b||b==c||c==a)
    {
        printf("triangle is a isosceles");

    }
    else
    {
        printf("triangle is a scalene");
    }
}
