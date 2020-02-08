#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
    {
        printf("the month have 31 days");
    }
    else if(x==4||x==6||x==9||x==11)
    {
        printf("the month have 30 days");

    }
    else if(x==2)
    {
        printf("the month have 28 days");
    }
}
