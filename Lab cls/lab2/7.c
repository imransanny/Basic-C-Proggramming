#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    float cost,totalcost;
    scanf("%d",&x);
    if(x<=150)
    {
        cost=(x*4.50);
    }
    else if(x<=300)
    {
        cost=(x-150)*6.00+(150*4.50);

    }
    else if(x<=500)
    {
        cost=(x-300)*8.50+(300*6.00);

    }
    else if(x>=500)
    {
        cost=(x-300)*10.00+(300*6.00);
    }

    totalcost=cost*0.2;
    printf("%f",totalcost);
}
