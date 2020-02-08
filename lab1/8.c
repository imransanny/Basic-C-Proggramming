#include<stdio.h>
int main()
{
    int m,s,sec,bill,charge;
    printf("m=minute and s=second");
    scanf("%d %d",&m,&s);
    sec=m*60+s;
    bill=ceil(sec/10);
    charge=bill*8;
    printf("charge of particular call %d",charge);



}
