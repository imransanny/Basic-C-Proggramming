#include<stdio.h>
#include<conio.h>
int main()
{
    int d,t,time,dis,totalcost;
    scanf("%d%d",&d,&t);
    dis=d*15;
    time=t*4;
    totalcost=dis+time;
    printf("%d",totalcost);
}
