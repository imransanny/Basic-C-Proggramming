#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%400==0||(x%4==0&&x%100!=0))
    {
        printf("leap year");

    }
    else
    {

        printf("not leap year");
    }
}
