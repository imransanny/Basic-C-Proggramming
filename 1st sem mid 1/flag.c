#include<stdio.h>
int main()
{

float width,length,r,areaC,areaR,greenarea;
scanf("%f",&length);
width=(length*0.6);
r=(length*0.2);
areaC=(3.14*r*r);
areaR=length*width;
greenarea=areaR-areaC;
printf("green area =%f\n red area=%f",greenarea,areaC);

}

