#include<stdio.h>
int main()
{
    int a,b,c,rice,dal,potato,cost,remain;
    //first rice,2nd dal,3rd alo
    scanf("%d %d %d",&a,&b,&c);
    rice=50*a;
    dal=60*b;
    potato=70*c;
    cost=rice+dal+potato;
    remain=1000-cost;
    printf("remain money in hand %d",remain);

}
