#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    float tax,totaltax;
    scanf("%d",&x);
    if(x<=300000)
    {
    tax=x*.1;
    }
    else if(x<=500000)
    {
        tax=(x-300000)*.15+(300000*.1);
    }
    totaltax=tax*20;
    printf("%f",totaltax);
}
